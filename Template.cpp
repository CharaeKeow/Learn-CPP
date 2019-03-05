//Header file: maximum.h

#ifndef MAXIMUM_H
#define MAXIMUM_H
template <class T> //template prefix
class Maximum
{
private:
	T val1, val2;
public:
	Maximum(T v1, T v2); //constructor
	void findMax(); // method findMax()
};
#endif

//maximum.cpp

#include <iostream>
#include "maximum.h"
using namespace std;

template <class T>
Maximum<T>::Maximum(T v1, T v2) // constructor
{
	val1 = v1;
	val2 = v2;
}
template <class T>
void Maximum<T>::findMax() // method findmax()
{
	T max;
	if (val1 > val2) max = val1;
	else max = val2;
	cout << "The maximum value is " << max << endl;
}
template class Maximum<int>;
template class Maximum<char>;

//main.cpp

#include <iostream>
#include "maximum.h"
using namespace std;
void main()
{
	Maximum <int> object1(100, 13);
	Maximum <char> object2('a', 'A');
	object1.findMax();
	cout << "\n";
	object2.findMax();
}
