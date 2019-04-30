//header
#ifndef STACK_H
#define STACK_H

template <class T>
struct Node
{
	T data;
	Node <T> *next;
};
template <class T>
class StackLinkedlist
{
private:
	int count;
	Node <T> *pTop;
public:
	StackLinkedlist();
	void Push(T &);
	void Pop();
	bool Empty();
	T StackTop();
};

#endif

//stack.cpp

#include <iostream>
#include "stack.h"
using namespace std;

template <class T>
StackLinkedlist <T>::StackLinkedlist()
{
	pTop = NULL;
	count = 0;
}

template <class T>
bool StackLinkedlist <T>::Empty()
{
	return (count == 0);
	// or return (pTop == NULL);
}
template <class T>
void StackLinkedlist<T>::Push(T &value)
{
	Node <T> *newNode = new Node <T>;
	newNode->data = value;
	newNode->next = pTop;
	pTop = newNode;
	count++;
}
template <class T>
void StackLinkedlist <T>::Pop()
{
	if (!Empty())
	{
		Node <T> *temp = pTop;
		pTop = pTop->next;
		delete temp;
		count--;
	}
}

template <class T>
T StackLinkedlist<T>::StackTop() {
	if (Empty())
		return 0;
	else
		return pTop->data;
	
}

template class StackLinkedlist<int>;

//main.cpp
#include <iostream>
#include "stack.h"
using namespace std;

void main()
{
	StackLinkedlist <int> stackMe;
	int i;
	cout << "Enter int(0 to quit): ";
	cin >> i;
	while (i != 0)
	{
		stackMe.Push(i);
		cout << "Top now:" << stackMe.StackTop();
		cout << endl;
		cout << "Enter int.(0 to quit): ";
		cin >> i;
	}
	cout << endl;
}

/*
---TODO--- 
#Add pop method to main, 
#Add menu for better UX
*/
