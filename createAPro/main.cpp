#include "stdafx.h"
#include "createapro.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	createAPro w;
	w.show();
	return a.exec();
}
