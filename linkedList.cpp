//linkedList.h
#ifndef LINKEDLIST_H
#define LINKEDLIST_H
template <class T>
class List {
private:
	class Node {
	public:
		T data;
		Node *link; //Node point to the address of link
	};
	Node *pHead, *pCurr; //Declare pointer to two object
	int numItem;
public:
	List();
	~List() {};
	void addToFront();
	bool traverse(T, int &);
	void printData();
	int numberOfItem();
};
#endif

//linkedList.cpp
#include <iostream>
using namespace std;
#include "List.h"

template <class T>
List<T>::List()
{
	numItem = 0;
	pHead = NULL;
}

template <class T>
void List<T>::addToFront()
{
	T item;
	Node *pNew = new Node;
	cout << "Enter Data : ";
	cin >> item;
	pNew->data = item;
	pNew->link = pHead;
	pHead = pNew;
	numItem++;
}

template <class T>
bool List<T>::traverse(T target, int &loc)
{
	if (numItem == 0)
		cout << "List is empty\n";
	else
	{
		pCurr = pHead;
		loc = 0;
		while (pCurr->data != target &&
			pCurr->link != NULL)
		{
			pCurr = pCurr->link;
			loc++;
		}
		if (pCurr->data == target)
			return true;
		else
			return false;
	}
}

template <class T>
void List<T>::printData()
{
	pCurr = pHead;
	while (pCurr != NULL)
	{
		cout << pCurr->data << " ";
		pCurr = pCurr->link;
	}
	cout << endl;
}

template <class T>
int List<T>::numberOfItem()
{
	return numItem;
}
template class List<int>;

//main.cpp
#include <iostream>
#include <time.h>
#include "List.h"
using namespace std;
int main()
{
	int target, location, num;
	List<int> x;
	for (int i = 0; i < 10; i++)
	{
		x.addToFront();
	}
	cout << "\nNumber of Item now : " << x.numberOfItem();
	cout << "\nThe list are : " << endl;
	x.printData();
	cout << "\nEnter the search item : ";
	cin >> target;
	if (x.traverse(target, location) == true)
		cout << "Item is found at location index : " << location << endl;
	else
		cout << "Item not found\n\n";

	return 0;
}
