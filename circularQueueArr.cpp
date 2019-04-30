//header
#ifndef CIRCULARQARR
#define CIRCULARQARR

const int Size = 100;

template <class TYPE>
class Queue
{
private:
	TYPE arr[Size];//array
	int count;//num of elements
	int front;//front queue
	int rear;//rear queue
public:
	Queue(); //constructor
	void Enqueue(TYPE);
	void Dequeue();
	TYPE queueFront();
	TYPE queueRear();
	bool Empty();
	bool Full();
};

#endif;

//header method declaration
#include <iostream>
#include "circularQArr.h"
using namespace std;

template <class TYPE>
Queue<TYPE>::Queue()
{
	front = -1;
	rear = -1;
	count = 0;
}

template <class TYPE>
bool Queue <TYPE> ::Empty()
{
	return (count == 0);
}

template <class TYPE>
bool Queue <TYPE> ::Full()
{
	return (count == Size);
}

template <class TYPE>
void Queue<TYPE>::Enqueue(TYPE value)
{
	if (!Full())
	{
		rear++;
		if (rear == Size)
			rear = 0;

		// Using formula
		//rear = (rear + 1) % size;
		if (count == 0)
			front = 0;
		arr[rear] = value;
		count++;
	}
	else
		cout << "Overflow!!!";
}

template <class TYPE>
void Queue<TYPE>::Dequeue()
{
	if (Empty())
		cout << "Underflow!";
	else
	{
		front++;
		if (front == Size)
			front = 0;
		//Using formula
		//front=(front+1)%size;

		if (count == 1)
			rear = front = -1;
		count--;
	}
}

template <class TYPE>
TYPE Queue <TYPE>::queueFront()
{
	if (Empty())
		return false;
	else
		return arr[front];
}

template <class TYPE>
TYPE Queue <TYPE>::queueRear()
{
	if (Empty())
		return false;
	else
		return arr[rear];
}

template class Queue<int>;

//main.cpp
#include <iostream>
#include "circularQArr.h"
using namespace std;

void main()
{
	Queue <int> one;
	one.Enqueue(40);
	one.Enqueue(30);
	one.Enqueue(20);
	cout << "\nFront: " << one.queueFront();
		cout << "\nRear : "<<one.queueRear();
		one.Dequeue(); //remove from one
	cout << "\nAfter one Dequeue : ";
	cout << "\nFront: " << one.queueFront() << endl;
}
