#ifndef RGB_SEG_H
#define RGB_SEG_H

#include <QtWidgets/QMainWindow>
#include "ui_rgb_seg.h"

class rgb_seg : public QMainWindow
{
	Q_OBJECT

public:
	rgb_seg(QWidget *parent = 0);
	~rgb_seg();

private:
	Ui::rgb_segClass ui;
};

#endif // RGB_SEG_H
