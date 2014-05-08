#ifndef CREATEAPRO_H
#define CREATEAPRO_H

#include <QtWidgets/QMainWindow>
#include "ui_createapro.h"

class createAPro : public QMainWindow
{
	Q_OBJECT

public:
	createAPro(QWidget *parent = 0);
	~createAPro();

private slots:
	 void on_pushButton_3_clicked();

private:
	Ui::createAProClass ui;
};

#endif // CREATEAPRO_H
