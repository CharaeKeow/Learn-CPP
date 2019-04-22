//cone.h
#ifndef CONE_H
#define CONE_H

template <class T>
class CONE { 
private:
	T radius, height, volume;
	const T PI = 3.14159265358979323846; //found online
public:
	CONE(T value); // this parameter (value) will be used to set the value of radius
	~CONE() {};
	void getHeight();
	void calcVolume();
	void display();
};
#endif

//cone.cpp
#include <iostream>
#include "cone.h"
#include <cmath>
using namespace std;

template <class T>
CONE<T>::CONE(T value) {
	radius = value; //radius = value passed from the parameter of the constructor
}

template <class T>
void CONE<T>::getHeight() {
	cout << "Enter the height of the cone: ";
	cin >> height;
}

template <class T>
void CONE<T>::calcVolume() {
	volume = (PI * pow(radius, 2) * height) / 3; 
}

template <class T>
void CONE<T>::display() {
	cout << "The radius of the cone is: " << radius;
	cout << "\nThe height of the cone is: " << height;
	cout << "\n\nThe volume of the cone is: " << volume;
	if (volume > 50) {
		cout <<  "\nCone is Accepted.\n\n";
	}
}

template class CONE<int>;
template class CONE<double>;
template class CONE<float>;

//main.cpp
#include <iostream>
#include "cone.h"
using namespace std;

void main() {
	CONE <double> cone(2); //this set the radius to 2 
	cone.getHeight();
	cone.calcVolume();
	cone.display();
}
