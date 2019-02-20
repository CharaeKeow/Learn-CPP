#include <iostream>
using namespace std;

int main()
{
	for (int i = 0; i < 6; i++) {
		if (i == 1) cout << "i is one\n";
		else if (i == 2) cout << "i is two\n";
		else if (i == 3) cout << "i is three\n";
		else cout << "i is not between 1 and 3\n";
	}

	return 0;
}
