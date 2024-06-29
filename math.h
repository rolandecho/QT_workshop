// Math.h  Definition
#ifndef MATH_H
#define MATH_H

#include <QObject>

class Math : public QObject
{
		Q_OBJECT

// Private Member Variablen
	private:
		int y;
		int x;
		int z;


	public:

		Math(); // default Constructor

		explicit Math(QObject *parent = nullptr); // explicit Constructor

		Math(int x, int y); // Constructor w/ Parameters

		~Math(); //Destructor

// Methoden
	int calc (int , int);

// Getter & Setter

	// Getter
	int getInt();

	//
	void setInt(int a);


// Slots & Signals

	// Slots
	public slots:


	// Signals
	signals:


	protected:

};

#endif // MATH_H
