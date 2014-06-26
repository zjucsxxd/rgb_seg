#include "rgb_seg.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	rgb_seg w;
	w.show();
	return a.exec();
}
