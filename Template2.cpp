//header.h

#ifndef CALCULATE_H
#define CALCULATE_H

template <class T>

class Array {
private:
	T arr[5];	
	T sum;
public:
	void input();
	void calcSum();
};
#endif;

//header.cpp
#include <iostream>
using namespace std;
#include "calculate.h"

template <class T>

void Array<T>::input(){
	cout << "Enter 5 numbers" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << "Enter: ";
		cin >> arr[i];
	}
};

template <class T>

void Array<T>::calcSum(){
	sum = 0;
	cout << "The sum of the array is: ";
	for (int i = 0; i < 5; i++) 
	{
		sum += arr[i];
	}
	cout << sum << endl;
}
template class Array<int>;
template class Array<float>;
template class Array<double>;

//main.cpp
#include <iostream>
#include "calculate.h"
using namespace std;

void main() 
{
	Array <int> Obj1;
	Array <double> Obj2;
	Array <float> Obj3;
	Obj1.input();
	Obj1.calcSum();
	Obj2.input();
	Obj2.calcSum();
	Obj3.input();
	Obj3.calcSum();
}
