#include <iostream>
#include <cstdlib>
using namespace std;

int sum(int arr[]);

int main() {
	int randArr[100];
	int min = 1;
	int max = 500;
	//Calculate the random array between 1-500
	for (int i = 0; i < 100; i++) {
		randArr[i] = (min + (rand() % (int)(max - min + 1)));
	}

	sum(randArr);

	return 0;
}

int sum(int arr[]) {
	int countOdd = 0; //Count odd number
	int betweenRange = 0; //Count num between 250 and 300
	int sum = 0; //To calculate average
	int highest = arr[0], lowest=arr[0]; //For highest and lowest

	for (int i = 0; i < 100; i++) {
		//How many odd number
		if (arr[i] % 2 == 1) {
			countOdd++;
		}
	}

	//Count num between 250 and 300
	for (int i = 0; i < 100; i++) {
		if (arr[i] >= 250 && arr[i] <= 300) {
			betweenRange++;
		}
	}

	//Count sum
	for (int i = 0; i < 100; i++) {
		sum += arr[i];
	}

	//Find highest
	for (int i = 0; i < 100; i++) {
		if (arr[i] > highest) {
			highest = arr[i];
		}
	}

	//and lowest
	for (int i = 0; i < 100; i++) {
		if (arr[i] < lowest) {
			lowest = arr[i];
		}
	}

	//Output
	cout << "\n";
	cout << "The odd number in the array are: " << countOdd << endl;
	cout << "The amount of number between 250 and 300 are: " << betweenRange << endl;
	cout << "The average of the array is: " << sum / 100 << endl;
	cout << "The highest number is " << highest << " and the lowest is " << lowest << endl;

	return 0;
}
