//This program creates an array of ten elements, assigns each element a random value,
//and then displays the min and max values.
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int i, min_value, max_value;
	int list[10];

	for (i = 1; i < 10; i++) {
		list[i] = rand();
	}

	//find min value
	min_value = list[0];
	for (i = 1; i < 10; i++) {
		if (min_value > list[i]) {
			min_value = list[i];
		}
	}
	cout << "min value: " << min_value << '\n';

	//find max value
	max_value = list[0];
	for (i = 1; i < 10; i++) {
		if (max_value < list[i]) {
			max_value = list[i];
		}
	}
	cout << "max value: " << max_value << '\n';

	return 0;
}
