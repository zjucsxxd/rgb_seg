#include "rgb_seg.h"

rgb_seg::rgb_seg(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	QObject::connect(ui.Open, SIGNAL(clicked()),this,SLOT(OpenButton_Clicked())); //连接Open按钮的信号与槽
	QObject::connect(ui.SpatialRad_Slider, SIGNAL(valueChanged(int)), this, SLOT(MeanShift_Process(int))); //三个Slider的响应
	QObject::connect(ui.ColorRad_Slider, SIGNAL(valueChanged(int)), this, SLOT(MeanShift_Process(int)));
	QObject::connect(ui.maxPryLevel_Slider, SIGNAL(valueChanged(int)), this, SLOT(MeanShift_Process(int)));
	//QObject::connect(ui.)

}

rgb_seg::~rgb_seg()
{

}

void rgb_seg::OpenButton_Clicked()
{
    QString filename = QFileDialog::getOpenFileName(this,tr("Open Image"),".", tr("Image Files(*.png *.jpg *.jpeg *.bmp)"));
	if (filename.isEmpty()) return;

	image = cv::imread(filename.toStdString().data()); //用OpenCV打开文件
	/********meanshift聚类分割*********/
	cv::pyrMeanShiftFiltering(image, image_seg, 10, 10, 1);
	cv::Mat Mask(image_seg.rows+2, image_seg.cols+2, CV_8UC1,cv::Scalar::all(0));
	cv::RNG rng = cv::theRNG();
	for (int i = 0; i<image_seg.rows; i++)
	{
		for (int j = 0; j<image_seg.cols; j++)
		{
			if (Mask.at<uchar>(i+1,j+1) == 0)
			{
				cv::Scalar newcolor(rng(256), rng(256), rng(256));
				cv::floodFill(image_seg, Mask, cv::Point(j,i), newcolor, 0, cv::Scalar::all(1), cv::Scalar::all(1));
			}
			
		}
	}


	cv::namedWindow("Meanshift"); //显示
    cv::imshow("Meanshift", image_seg);



	cv::cvtColor(image, image, CV_BGR2RGB); //转化为QImage 并显示
	QImage Qimg = QImage( (unsigned char*)(image.data), image.cols, image.rows, QImage::Format_RGB888 );


	
	ui.Qimage_Label->move(20, 50);
	ui.Qimage_Label->setPixmap(QPixmap::fromImage(Qimg));
	ui.Qimage_Label->resize(ui.Qimage_Label->pixmap()->size());
	ui.Qimage_Label->show();
}


void rgb_seg::MeanShift_Process(int)
{
	double spatialrad = (double)ui.SpatialRad_Slider->value();
	double colorrad = (double)ui.ColorRad_Slider->value();
	int maxprylevel = ui.maxPryLevel_Slider->value();

	ui.SptialValue->setValue(ui.SpatialRad_Slider->value()); //spinBox显示数字
	ui.ColorValue->setValue(ui.ColorRad_Slider->value());
	ui.PryLevelValue->setValue(ui.maxPryLevel_Slider->value());


	/********meanshift聚类分割*********/
	cv::pyrMeanShiftFiltering(image, image_seg, spatialrad, colorrad, maxprylevel);
	cv::Mat Mask(image_seg.rows+2, image_seg.cols+2, CV_8UC1,cv::Scalar::all(0));
	cv::RNG rng = cv::theRNG();
	for (int i = 0; i<image_seg.rows; i++)
	{
		for (int j = 0; j<image_seg.cols; j++)
		{
			if (Mask.at<uchar>(i+1,j+1) == 0)
			{
				cv::Scalar newcolor(rng(256), rng(256), rng(256));
				cv::floodFill(image_seg, Mask, cv::Point(j,i), newcolor, 0, cv::Scalar::all(1), cv::Scalar::all(1));
			}

		}
	}

	cv::imshow("Meanshift", image_seg);
}