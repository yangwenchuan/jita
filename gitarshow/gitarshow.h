#ifndef GITARSHOW_H
#define GITARSHOW_H

#include <QtGui/QMainWindow>
#include <QMap>
#include <QString>
#include <QStringlist>
#include <QLabel>

#include "ui_gitarshow.h"

class gitarshow : public QMainWindow
{
	Q_OBJECT

public:
	gitarshow(QWidget *parent = 0, Qt::WFlags flags = 0);
	~gitarshow();

private:
	void loadAllPic();

	void updatePiclst();

	void updateShow();

public slots:

	void onNameListCurrentTextChanged(const QString &songname);

	void resizeEvent ( QResizeEvent * event );

	//模糊查找
	void onSearchClick(bool);
	//重新全部加载
	void onRefreshClick(bool);

	//
	void onSearchNameChanged( const QString & name);

private:

	Ui::gitarshowClass ui;

	QMap<QString, QStringList> m_songMap;

	QList<QLabel*>  m_labelLst;
	QString         m_currentSongName;
	
};

#endif // GITARSHOW_H
