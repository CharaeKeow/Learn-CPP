#include <iostream>
using namespace std;

int parkingCharge(int c, int b, int t);

int main()
{
	int car, bus, truck;
	cout << "Enter the hours vehicle spent in the parking lot." << endl;
	cout << "Car: ";
	cin >> car;
	cout << "\nBus: ";
	cin >> bus;
	cout << "\nTruck: ";
	cin >> truck;

	cout << "The parking lot charge for each type of vehicle are: " << endl;
	parkingCharge(car, bus, truck);

	return 0;
}

int parkingCharge(int c, int b, int t)
{
	cout << "Car: " << c * 2 << endl;
	cout << "Bus: " << b * 3 << endl;
	cout << "Truck: " << t * 4 << endl;

	return 0;
}
