#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	char data[100];

	//open file in write mode
	ofstream outfile;
	outfile.open("book.dat");

	cout << "Writing to the the file" << endl;
	cout << "Enter your name: ";
	cin.getline(data, 100);

	//Write input data to file
	outfile << data << endl;

	cout << "enter your age: ";
	cin >> data;
	cin.ignore();

	outfile << data << endl;

	//Close file
	outfile.close();

	//open in read mode
	ifstream infile;
	infile.open("book.dat");

	cout << "Reading from file" << endl;
	infile >> data;

	//Write data at screen
	cout << data << endl;

	//read data from file and display at screen
	infile >> data;
	cout << data << endl;

	//close the opened file
	infile.close();

	return 0;
}
