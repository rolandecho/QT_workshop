// Math.cpp Implementation

#include "math.h"

// Membervaiablen




//default Constructor
Math::Math(){

	int x = 0;
	int y = 0;
	int z = 0;

}

// explicit Constructor
Math::Math(QObject *parent) : QObject(parent) {}

// Constructor w/ parameters
Math::Math(int x, int y): x(2), y(3){}


// Destructor

Math::~Math(){}
// Methods
int Math::calc(int y, int x){
z = y +x;
return z;}

// Getter & Setter

int Math::getInt(){
 return x;
}

void Math::setInt(int a){
x = a;
}



\

// Slots & Signals

//Slotsconst int methode


// Signals

