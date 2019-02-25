#include <iostream>
#include <string>
#include <sstream>
using namespace std;

struct movies_t {
    string title;
    int year;
} films[3];

void printMovie(movies_t movie);

int main()
{
    string mystr;
    int i;
    
    for(i=0; i<3; i++){
        cout << "Enter title: ";
        getline(cin, films[i].title);
        cout << "Enter year: ";
        getline(cin, mystr);
        stringstream(mystr) >> films[i].year;
    }
    
    cout << "\nYou have entered these movies:\n";
    for (i=0; i<3; i++) {
        printMovie(films[i]);    
    }
    
    return 0;
}

void printMovie(movies_t movie) 
{
    cout << movie.title;
    cout << " (" << movie.year << ")\n";
}
