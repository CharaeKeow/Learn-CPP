//header.h

#ifndef HEADER_H
#define HEADER_H

template <class T>
class List {
private:
	struct Node {
		T firstname;
		T lastname;
		Node* next;
	};
	Node* head, * tail;
public:
	List();
	~List() {};
	void create_contact(T firstName, T lastName);
	void display_all();
	void delete_position(int position);
	void delete_head();
};

#endif

//header.cpp

#include <iostream>
#include <string>
#include "header.h"
using namespace std;

template <class T>
List<T>::List() {
	head = NULL;
	tail = NULL;
}

template <class T>
void List<T>::create_contact(T firstName, T lastName) {
	Node* temp = new Node;
	temp->firstname = firstName;
	temp->lastname = lastName;
	temp->next = NULL;
	if (head == NULL)
	{
		head = temp;
		tail = temp;
		temp = NULL;
	}
	else
	{
		tail->next = temp;
		tail = temp;
	}
}

template <class T>
void List<T>::display_all() {
	
	int contactNum = 1;
	Node* temp = new Node;
	temp = head;
	while (temp != NULL)    // Loop through the list while the temporary node is not empty
	{
		cout << "\nContact Number: " << contactNum << endl;
		cout << "First Name: " << temp->firstname << endl;
		cout << "Last Name: " << temp->lastname << endl;
		++contactNum;
		temp = temp->next;
	}
}

template <class T>
void List<T>::delete_position(int position) {
	Node* current = new Node;
	Node* previous = new Node;
	Node* next = new Node;
	current = head;
	for (int i = 1; i < position; i++)   // Loop through the link list while the current node is not empty
	{
		if (current == NULL)
			return;
		previous = current;
		current = current->next;
	}
	next = current->next;
	previous->next = current->next;
	delete current;
}

template <class T>
void List<T>::delete_head() {
	Node* temp = new Node;
	temp = head;
	head = head->next;
	delete temp;
}

template class List<char>;

//main.cpp
#include <iostream>
#include <string>
#include "header.h"
using namespace std;

template <class T>
List<T>::List() {
	head = NULL;
	tail = NULL;
}

template <class T>
void List<T>::create_contact(T firstName, T lastName) {
	Node* temp = new Node;
	temp->firstname = firstName;
	temp->lastname = lastName;
	temp->next = NULL;
	if (head == NULL)
	{
		head = temp;
		tail = temp;
		temp = NULL;
	}
	else
	{
		tail->next = temp;
		tail = temp;
	}
}

template <class T>
void List<T>::display_all() {
	
	int contactNum = 1;
	Node* temp = new Node;
	temp = head;
	while (temp != NULL)    // Loop through the list while the temporary node is not empty
	{
		cout << "\nContact Number: " << contactNum << endl;
		cout << "First Name: " << temp->firstname << endl;
		cout << "Last Name: " << temp->lastname << endl;
		++contactNum;
		temp = temp->next;
	}
}

template <class T>
void List<T>::delete_position(int position) {
	Node* current = new Node;
	Node* previous = new Node;
	Node* next = new Node;
	current = head;
	for (int i = 1; i < position; i++)   // Loop through the link list while the current node is not empty
	{
		if (current == NULL)
			return;
		previous = current;
		current = current->next;
	}
	next = current->next;
	previous->next = current->next;
	delete current;
}

template <class T>
void List<T>::delete_head() {
	Node* temp = new Node;
	temp = head;
	head = head->next;
	delete temp;
}

template class List<char>;
