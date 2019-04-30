//header

#ifndef QUEUE_H
#define QUEUE_H

template <class TYPE>
struct Node
{
	TYPE data;
	Node <TYPE> *next;
};

template <class TYPE>
class LinkedQueue
{
private:
	Node <TYPE> *front;
	int count;
	Node <TYPE> *rear;
public:
	LinkedQueue();
	void Enqueue(TYPE);
	void Dequeue();
	TYPE queueFront();
	TYPE queueRear();
	bool Empty();
};

#endif;

//header methods

#include <iostream>
#include "queue.h"
using namespace std;

template <class TYPE>
LinkedQueue<TYPE>::LinkedQueue()
{
	front = NULL;
	rear = NULL;
	count = 0;
}
template <class TYPE>
bool LinkedQueue <TYPE> ::Empty()
{
	return (count == 0);
}

template <class TYPE>
void LinkedQueue<TYPE>::Enqueue(TYPE value)
{
	Node <TYPE> *newNode = new Node <TYPE>;
	newNode->data = value;
	newNode->next = NULL;
	if (!Empty()) // test if queue is not empty
		rear->next = newNode;
	else
		front = newNode;
	count++;
	rear = newNode;
	rear->next = front;
}

template <class TYPE>
void LinkedQueue<TYPE>::Dequeue()
{
	if (count == 0)// test for empty queue
		cout << "Underflow";
	else
	{
		Node<TYPE> *temp = front;
		if (count == 1)
			front = rear = NULL;
		else
			front = rear = front->next;
		count--;
		delete temp;
	}
}

template <class TYPE>
TYPE LinkedQueue <TYPE>::queueFront()
{
	if (Empty())
		return false;
	else
		return front->data;
}
template <class TYPE>
TYPE LinkedQueue<TYPE>::queueRear()
{
	if (Empty())
		return false;
	else
		return rear->data;
}

template class LinkedQueue<int>;

//main

#include <iostream>
#include "queue.h"
using namespace std;

void main()
{
	LinkedQueue <int> one;
	one.Enqueue(40);
	one.Enqueue(30);
	one.Enqueue(20);
	cout << "\nFront: " <<one.queueFront();
	cout << "\nRear : " <<one.queueRear();
	one.Dequeue();
	cout << "\nAfter one Dequeue : ";
	cout << "\nFront: " << one.queueFront() << endl;
}
