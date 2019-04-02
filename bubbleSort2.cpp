//bubblesort.h
#ifndef BUBBLESORT_H
#define BUBBLESORT_H
const int Size = 5;

template <class T>
class Bubble {
public:
	T arr[Size];
	void bubbleSort(T [],int);
};
#endif

//bubblesort.cpp

#include <iostream>
#include "bubbleSort.h"
using namespace std;

template <class T>
void Bubble<T>::bubbleSort(T list[], int last) {
	int current, walker, temp;
	bool sorted;

	for (current = 0, sorted = false; current <= last & !sorted; current++) {
		for (walker = last, sorted = true; walker > current; walker--) {
			if (list[walker] < list[walker - 1]) {
				sorted = false;
				temp = list[walker];
				list[walker] = list[walker - 1];
				list[walker - 1] = temp;
			}
		}
	}
}

template class Bubble<int>;

//main.cpp
#include <iostream>
using namespace std;
#include "bubbleSort.h"

void main() {
	Bubble<int> sort;
	cout << "Input data: " << endl;
	for (int i = 0; i < Size; i++){
		cout << "Data [" << i << "] : ";
		cin >> sort.arr[i];
	}

	cout << endl;
	sort.bubbleSort(sort.arr, Size - 1);

	cout << "Data after sorted ascending : " << endl;
	for (int j = 0; j < 5; j++) {
		cout << "Data [" << j << " ] : ";
		cout << sort.arr[j] << endl;
	}
}

