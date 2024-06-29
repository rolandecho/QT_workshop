#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
		Q_OBJECT

	public:
		MainWindow(QWidget *parent = nullptr);
		~MainWindow();

	private:
		Ui::MainWindow *ui;
// Singnal Verarbeitung in QT mit Singals und Slots durch den MetaObjectCompiler
// in C++ callbacks auf Metoden oder Funktionen
		// callback wird dann innerhalb eine andern Funktion oder Methode aufgerufen

//Methoden die aufgerufen werden wenn ein Signal versickt wird
// die das Siganal empfangen, d.h. die Logik die auf das Siganl antwortet
	private slots:
		void helloWorld();
		void pushButtonSlot();
		void mySignalSlot();
		void activateSlot();
		void click();

//Methoden die aufgerufen werden wenn eine Action druch geführt werden (?)
	 signals:
		void mySignal();
	//	void Activate();
};
#endif // MAINWINDOW_H
