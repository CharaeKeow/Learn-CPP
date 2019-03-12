//Header: sequential.h

#ifndef SEQUENTIAL_H
#define SEQUENTIAL_H

const int SIZE = 10;
class Sequential {
public: 
	int locationWanted;
	int array[SIZE];
	bool SequentialSearch(int[], int, int, int&);
};
#endif;

//sequential.cpp

#include <iostream>
using namespace std;
#include "sequential.h"

bool Sequential::SequentialSearch(int array[], int SIZE, int target, int& locWanted) {
	int index = 0;
	bool found = false;
	while (index < SIZE - 1) {
		if (array[index] != target) {
			index++;
		}
		else {
			found = true;
			locWanted = index;
			break;
		}
	}
	cout << "Ref: " << locWanted << endl;
	return found;
}

//main.cpp

#include <iostream>
using namespace std;
#include "sequential.h"

void main() {
	int target, i; 
	bool found; //bool return 0 or 1 (true or false)
	Sequential SS; //SS = Sequential Search

	cout << "The Data\n";
	for (i = 0; i < SIZE; i++) {
		SS.array[i] = rand() % 500 + 1;
	}

	for (i = 0; i < SIZE; i++) {
		cout << SS.array[i] << " ";
	}

	cout << endl;
	cout << "Insert a target, or 0 to stop: ";
	cin >> target;
	
	//Why do-while loop? Because to ensure the loop to run at least once, and to add condition if the user wanna
	//exit the program.

	do {		
		found = SS.SequentialSearch(SS.array, SIZE, target, SS.locationWanted);  //This is smart. 
		
		//found will be used in if statement to print output.
		if (found) {
			cout << "\tFound " << target << " at index " << SS.locationWanted << endl;
		}
		else {
			cout << "\tTarget not found" << endl;
		}
		cout << "\nInsert a target, or 0 to stop: ";
		cin >> target;
		
	} while (target != 0); //Exit condition
}
