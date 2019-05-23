//header file

#ifndef HEADER_H
#define HEADER_H

const int SIZE = 15;

template <class T>
class Queue {
private:
	T arr[SIZE];
	int count;
	int front;
	int rear;
public:
	Queue();
	~Queue() {};
	void enqueue(T);
	void dequeue();
	void displayAll();
	bool empty();
	bool full();
};

#endif

//header method

#include "header.h"
#include <iostream>
using namespace std;

template <class T>
Queue<T>::Queue() { //initialize empty queue
	front = -1;
	rear = -1;
	count = 0;
}

template <class T>
bool Queue<T>::empty() {
	return (count == 0); 
}

template <class T>
bool Queue<T>::full() {
	return (count == SIZE);
}

template <class T>
void Queue<T>::enqueue(T value){
	if (!full()) {
		rear++;
		if (rear == SIZE) {
			rear = 0;
		}

		if (count == 0) {
			front = 0;
		}

		arr[rear] = value;
		count++;
	}
	else {
		cout << "Overflow!" << endl;
	}
}

template <class T>
void Queue<T>::dequeue() {
	if (empty()) {
		cout << "Underflow" << endl; 
	}
	else {
		front++;
		if (front == SIZE) {
			front = 0;
		}
		if (count == 1) {
			rear = front = -1;
		}
		count--;
	}
}

template <class T>
void Queue<T>::displayAll() {
	int i = 0;
	for (i = 0; i < SIZE; i++) {
		cout << arr[i] <<  endl;
	}
}

template class Queue<int>;

//main.cpp

#include "header.h"
#include <cstdlib> //for generating random int
#include <iostream>
using namespace std;

void main() {
	Queue<int> queue;
	//generate 30 random num between 200 and 300;
	int temp;
	for (int i = 0; i < 30; i++) {
		temp = (200 + (rand() % (300 - 200 + 1)));

		//The code to enqueue all numbers except the ones between 100 and 150, as per question.
		if (!queue.full()) { //Condition: stop enqueue if the queue is full.
			if (temp >= 150) {
				queue.enqueue(temp);
			}
		}
		
		//I think Madam means enqueue all number except the ones between 200 and 250 (instead of 100 and 150)
		//So here's the code for enqueue all number except the ones between 200 and 250. 
		//The code is commented out in case I'm mistaken.
		
		//if (temp > 200 && temp >= 250) {
		//	queue.enqueue(temp);
		//}

	}

	cout << "\n\n\nThe numbers in the queue are: " << endl;
	queue.displayAll();
}

