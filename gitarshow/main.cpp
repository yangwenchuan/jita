#include "gitarshow.h"
#include <QtGui/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	gitarshow w;
	w.show();
	return a.exec();
}
