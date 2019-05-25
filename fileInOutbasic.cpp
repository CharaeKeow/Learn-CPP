#include <iostream>
using namespace std;
#include <fstream>
#include <string>
#include <stdlib.h>


int main() {
	ifstream inStream;
	ofstream outStream;

	inStream.open("infile.txt");
	outStream.open("outfile.txt");

	//int first, second, third;
	//inStream >> first >> second >> third;
	
	string next;

	while (getline(inStream, next)) {
		cout << next << endl;
		outStream << next << endl;
	}
	
	inStream.close();
	outStream.close();

	return 0;
}
