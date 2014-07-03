#ifndef RGB_SEG_H
#define RGB_SEG_H

#include <QtWidgets/QMainWindow>
#include <QMessageBox>
#include <QFileDialog>
#include <QLabel>
#include <QImage>
#include <QPixmap>

#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/opencv.hpp>

#include "ui_rgb_seg.h"

class rgb_seg : public QMainWindow
{
	Q_OBJECT

public:
	rgb_seg(QWidget *parent = 0);
	~rgb_seg();
private slots:
	void OpenButton_Clicked();
	void MeanShift_Process(int);

private:
	Ui::rgb_segClass ui;
	cv::Mat image;
	cv::Mat image_seg;
};

#endif // RGB_SEG_H
