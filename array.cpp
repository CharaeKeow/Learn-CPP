#include <iostream>
using namespace std;

int main()
{
	int sample[10]; //Reserve 10 integer elements
	int t;

	//load the array
	for (t = 0; t < 10; t++) {
		sample[t] = t;
	}

	//display the array
	for (t = 0; t < 10; t++) {
		cout << sample[t] << ' ';
	}

	return 0;
}
