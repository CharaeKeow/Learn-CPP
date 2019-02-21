//Bubble sort
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int nums[10];
	int a, b, t;
	int size;

	size = 10; // number of elements to sort

	//Give array some random initial values, using rand()
	for (t = 0; t < size; t++) {
		nums[t] = rand();
	}

	//Display original array.
	cout << "Original array is: ";
	for (t = 0; t < size; t++) {
		cout << nums[t] << ' ';		
	}
	cout << '\n';

	//The sort.
	for (a = 1; a < size; a++) {
		for (b = size - 1; b >= a; b--) {
			if (nums[b - 1] > nums[b]) { //Check if out of order
				//exchange elements
				t = nums[b - 1];
				nums[b - 1] = nums[b];
				nums[b] = t;
			}
		}
	}

	//Display the sorted array.
	cout << "Sorted array is: ";
	for (t = 0; t < size; t++) {
		cout << nums[t] << ' ';
	}

	return 0;
}
