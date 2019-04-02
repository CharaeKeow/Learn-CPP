//header
#ifndef SORT_H
#define SORT_H
const int arrsize = 8;
template <class T>
class Sort
{
private:
	T ARR[arrsize];
public:
	~Sort() {};
	void getdata();
	void BS();
};
#endif

//header.cpp
#include <iostream>
#include <fstream>
#include "bs.h"

using namespace std;
template <class T>
void Sort<T>::getdata()
{
	int i;
	ifstream inFile("Numbers.txt", ios::in);
	if (!inFile)
	{
		cout << "\vFile cannot be opened\n";
		exit(1);
	}
	for (i = 0; i < arrsize; ++i)
		inFile >> ARR[i];
}
template <class T>
void Sort<T>::BS()
{
	int i, j;
	T B[arrsize];
	T temp;
	cout << "\nList before\n\n";
	for (i = 0; i < arrsize; ++i)
	{
		B[i] = ARR[i];
		cout << B[i] << "\t";
	}
	cout << endl << endl;
	for (i = 1; i<arrsize; ++i)
	{
		for (j = 0; j<(arrsize - i); ++j)
		{
			if (B[j]>B[j + 1])
			{
				temp = B[j];
				B[j] = B[j + 1];
				B[j + 1] = temp;
			}
		}
	}
	cout << "\n\n\nThe list after being sorted using Bubble method\n\n";
	for (i = 0; i<arrsize; ++i)
	{
		cout << B[i] << "\t";
	}
	cout << endl << endl;
}
template class Sort<int>;

//main.cpp
#include <iostream>
#include "bs.h"
using namespace std;
int main()
{
	Sort<int> x;
	x.getdata();
	x.BS();
}
