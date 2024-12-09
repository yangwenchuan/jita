#include <QString>
#include <QDir>
#include <QDirIterator>
#include <QImage>
#include <QMessageBox>

#include "gitarshow.h"


gitarshow::gitarshow(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);
	loadAllPic();
	updatePiclst();

	disconnect(ui.listWidget, SIGNAL(currentTextChanged(const QString&)), this, SLOT(onNameListCurrentTextChanged(const QString &)));
	connect(ui.listWidget, SIGNAL(currentTextChanged(const QString&)), this, SLOT(onNameListCurrentTextChanged(const QString&)));

	disconnect(ui.lineEdit_Name,SIGNAL(textChanged(const QString &)), this, SLOT(onSearchNameChanged(const QString &)));
	connect(ui.lineEdit_Name,SIGNAL(textChanged(const QString &)), this, SLOT(onSearchNameChanged(const QString &)));

	disconnect(ui.pushButton_Search, SIGNAL(clicked(bool)), this, SLOT(onSearchClick(bool)));
	connect(ui.pushButton_Search, SIGNAL(clicked(bool)), this, SLOT(onSearchClick(bool)));

	disconnect(ui.pushButton_Refresh, SIGNAL(clicked(bool)), this, SLOT(onRefreshClick(bool)));
	connect(ui.pushButton_Refresh, SIGNAL(clicked(bool)), this, SLOT(onRefreshClick(bool)));
	
}

gitarshow::~gitarshow()
{

}

void gitarshow::loadAllPic()
{
	QString pathrun = QCoreApplication::applicationDirPath();
	pathrun = pathrun.left(pathrun.lastIndexOf("/")) + "/" + "jita";
	QDirIterator iterator(pathrun );
	while(iterator.hasNext()) 
	{
		QFileInfo info(iterator.next());
		QString name = info.fileName(); //获取文件名
		QString fileName = info.filePath(); //文件目录+文件名
		if (info.isDir()
			&&(name != ".")
			&& (name != ".." ))
		{
			QString str = iterator.filePath();
			QDir dir(fileName);
			QStringList nameFilters;
			nameFilters << "*.jpg" << "*.png"<<"*.jpeg"<<"*.gif";
			QStringList files = dir.entryList(nameFilters, QDir::Files|QDir::Readable, QDir::Name);
			QStringList fullpathname; 
			foreach(QString strname, files)
			{
				fullpathname<<(fileName + "/" + strname);
			}
			m_songMap.insert(name, fullpathname);
		}
	}
	int n = 9;
}

void gitarshow::updatePiclst()
{
	ui.listWidget->clear();

	QMap<QString, QStringList>::Iterator it = m_songMap.begin();
	for (it = m_songMap.begin(); it != m_songMap.end(); it++)
	{
		QString songname = it.key();
		ui.listWidget->addItem(songname);
	}
}

void gitarshow::onNameListCurrentTextChanged(const QString &songname )
{
	m_currentSongName = songname;
	updateShow();
}

void gitarshow::resizeEvent( QResizeEvent * event )
{
	updateShow();
}

void gitarshow::updateShow()
{
	QMap<QString, QStringList>::Iterator it = m_songMap.find(m_currentSongName);
	if (m_songMap.end() == it)
	{
		return;
	}

	QStringList pathnamelst = it.value();

	foreach(QLabel* la, m_labelLst) //清空用于显示的label
	{
		if (NULL != la)
		{
			delete la;
			la = NULL;
		}
	}
	m_labelLst.clear();

	int n = pathnamelst.size();//布局显示


	//foreach(QString pathname, pathnamelst)
	for(int i=0; i<pathnamelst.size(); i++)
	{
		QString filename = pathnamelst[i];
		//QString filename("pathname");
		QImage* img=new QImage;
		if(! ( img->load(filename) ) ) //加载图像
		{
			QMessageBox::information(this,
				QString::fromLocal8Bit("打开图像失败"),
				QString::fromLocal8Bit("打开图像失败!") + filename);
			delete img;
			return;
		}

		if ( 0 == i)
		{
			QImage qScaledImage;
			QSize qImageSize = img->size();
			QSize qLabelSize = ui.label_1->size();
			double dWidthRatio = 1.0*qImageSize.width() / qLabelSize.width();
			double dHeightRatio = 1.0*qImageSize.height() / qLabelSize.height();
			if (dWidthRatio>dHeightRatio)
			{
				qScaledImage = img->scaledToWidth(qLabelSize.width());
			}
			else
			{
				qScaledImage = img->scaledToHeight(qLabelSize.height());
			}

			ui.label_1->setPixmap(QPixmap::fromImage(qScaledImage));
		}
		else if(1 == i)
		{
			QImage qScaledImage;
			QSize qImageSize = img->size();
			QSize qLabelSize = ui.label_1->size();
			double dWidthRatio = 1.0*qImageSize.width() / qLabelSize.width();
			double dHeightRatio = 1.0*qImageSize.height() / qLabelSize.height();
			if (dWidthRatio>dHeightRatio)
			{
				qScaledImage = img->scaledToWidth(qLabelSize.width());
			}
			else
			{
				qScaledImage = img->scaledToHeight(qLabelSize.height());
			}
			ui.label_2->setPixmap(QPixmap::fromImage(qScaledImage));
		}
		else if(2 == i)
		{
			QImage qScaledImage;
			QSize qImageSize = img->size();
			QSize qLabelSize = ui.label_1->size();
			double dWidthRatio = 1.0*qImageSize.width() / qLabelSize.width();
			double dHeightRatio = 1.0*qImageSize.height() / qLabelSize.height();
			if (dWidthRatio>dHeightRatio)
			{
				qScaledImage = img->scaledToWidth(qLabelSize.width());
			}
			else
			{
				qScaledImage = img->scaledToHeight(qLabelSize.height());
			}
			ui.label_3->setPixmap(QPixmap::fromImage(qScaledImage));
		}
		delete img;
		img = NULL;
	}
}

void gitarshow::onSearchClick(bool b)
{
	ui.listWidget->clear();
	QString name = ui.lineEdit_Name->text();
	if (name.isEmpty())
	{
		updatePiclst();
	}
	else
	{
		QMap<QString, QStringList>::Iterator it = m_songMap.begin();
		for (it = m_songMap.begin(); it != m_songMap.end(); it++)
		{
			QString songname = it.key();
			if (songname.contains(name))
			{
				ui.listWidget->addItem(songname);
			}
		}
	}
}

void gitarshow::onRefreshClick(bool b)
{
	m_songMap.clear();
	loadAllPic();
	updatePiclst();
}

void gitarshow::onSearchNameChanged( const QString & name )
{
	ui.listWidget->clear();
	if (name.isEmpty())
	{
		updatePiclst();
	}
	else
	{
		QMap<QString, QStringList>::Iterator it = m_songMap.begin();
		for (it = m_songMap.begin(); it != m_songMap.end(); it++)
		{
			QString songname = it.key();
			if (songname.contains(name))
			{
				ui.listWidget->addItem(songname);
			}
		}
	}
}

