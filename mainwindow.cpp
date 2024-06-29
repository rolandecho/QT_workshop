
// press 'Shift + Ctrl + /' to comment and uncomment multiple lines
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
	: QMainWindow(parent)
	, ui(new Ui::MainWindow)
{
	ui->setupUi(this);

// Arguments von Connect; Connect takes 5 Arguments; but the 5th Argument is optional
	//QObject::connect (sender, signal,receiver, method); where method is the slot
	MainWindow::connect( //manuel connectierung
	(*ui).pushButton,
				&QPushButton::clicked,
				this,
				&MainWindow::pushButtonSlot);

	connect(this, &MainWindow::mySignal,this,&MainWindow::mySignalSlot);
	//two connections on the Activate Button
	connect(ui->Activate, &QPushButton::clicked,this,&MainWindow::activateSlot);
//connect()


}



MainWindow::~MainWindow()
{
	delete ui;
}

void MainWindow::helloWorld()
{
	qDebug() << "it works !!!";
//ui ->lineEdit->setText("watch Thorsten Geppert he knows Qt");
		//	Dereferenzieren des ui Zeigers: (*ui)
		//	Zugriff auf das lineEdit Mitglied: (*ui).lineEdit
		//	Dereferenzieren des lineEdit Zeigers: (*(*ui).lineEdit)
		//	Aufrufen der setText Methode: (*(*ui).lineEdit).setText("watch Thorsten Geppert he knows Qt");
	(*(*ui).lineEdit).setText("watch Thorsten Geppert he knows Qt");
	(*(*ui).valueLine).setText("just trying");
}

void MainWindow::pushButtonSlot()
{

qDebug() <<"pushButton pressed";
emit mySignal();

}

void MainWindow::mySignalSlot()
{
	qDebug() << "new Signal called";
}

void MainWindow::click(){
	//qDebug() << "activate pressed";
	//emit activate();
}

void MainWindow::activateSlot()
{
 qDebug() << "activate Slot called";

}
;
