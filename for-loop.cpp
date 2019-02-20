/*
Simple standard for loop
*/
#include <iostream>
#include <cmath> //To call the sqrt() function 
using namespace std;

int main()
{
	int num;
	double sq_root;

	for (num = 1; num < 100; num++) {
		sq_root = sqrt((double)num); //num is 'casted' to double as most of the result of sqrt is in fraction.
		cout << num << " " << sq_root << '\n';
	}

	return 0;
}

/*
Multiple loop control variables
*/

#include <iostream>
using namespace std;

int main()
{
	int x = 0, y = 10;

  //As you see, this for loop expression consist of two initialization statements and two increment expressions. 
	for (x, y; x <= 10; x++, y--)
		cout << x << " " << y << '\n';

	return 0;
}

/*
Condition controlling can be any valid C++ expression. 
Consider the following example:
*/

#include <iostream>
#include <conio.h> //Is required for _kbhit()
using namespace std;

int main()
{
	int i;

	//Print number until the keyboard is pressed (Cool!)
	for (i = 0; !_kbhit(); i++) cout << i << ' ';

	return 0;
}
