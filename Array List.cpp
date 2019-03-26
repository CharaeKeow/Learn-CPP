//Header
#ifndef LIST_H
#define LIST_H

const int MaxSize = 100;

class List
{
private:
	int Size;
	int Array[MaxSize];
public:
	List();
	~List();
	int numberItem();
	void insert(int item, int position);
	void del(int position);
	void display();
};
#endif

/List.cpp
#include <iostream>
using namespace std;
#include "List.h"

List::List() {
	Size = 0;
}
List::~List(){ }

int List::numberItem() {
	return Size;
}

void List::insert(int item, int position){
	if (Size == MaxSize)
	{
		cout << "***List is full***\n";
		return;
	}
	if (position < 0 || position > Size)
	{
		cout << "***Invalid position\n";
		return;
	}
	for (int i = Size - 1; i >= position - 1; i--) {
		Array[i + 1] = Array[i];
	}

	Array[position] = item;
	Size++;
}

void List ::del(int position){
	if (Size == 0)
	{
		cout << "***Empty list ***\n";
		return;
	}
	if (position < 0 || position >= Size)
	{
		cout << "***Invalid position \n";
		return;
	}
	for (int i = position + 1; i < Size; i++) {
		Array[i - 1] = Array[i];
	}
	Size--;
}

void List::display()
{
	for (int i = 0; i < Size; i++) {
		cout << Array[i] << " ";		
	}
	cout << " \n";
}

//main.cpp
#include <iostream>
using namespace std;
#include "List.h"

int main()
{
	char n;
	cout << "Enter program: " << endl;
	cout << "Y to continue, or 0 to exit";
	cin >> n;
	do {
		int item, position;
		List intList;

		//Test either list is empty or not.
		if (intList.numberItem() == 0) {
			cout << "List is empty\n";
		}

		//Insert item
		for (int i = 0; i < 10; i++) {
			intList.insert(i * 2, i);
		}

		cout << "List after Insert Operation \n";
		intList.display();

		cout << "Enter data to be inserted : ";
		cin >> item;

		cout << "Enter location of index : ";
		cin >> position;
		intList.insert(item, position);

		cout << "New List : \n";
		intList.display();
	} while (n!=0);

	return 0;
}
