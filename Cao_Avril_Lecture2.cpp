// Avril Cao
// Lecture 2
// September 16, 2024

// I used #include <iostream> to use cout

#include <iostream>
#include <string>
using namespace std;

// I used using namespace std; so i don't have to write std:: before cout and endl
// C++ programs require the function main()
// I used an open swiggle bracket to mark the beginning of the body of code

int main() {

    int numSix = 6;
    float floNum = 7.11;
    double douNum = 9.67;
    char lettA = 'A';
    bool booleanTru = true;
    string strHi = "Hi";

// I used cout to insert data for a result to be displayed o the screen

    cout << "int: " << numSix << "\n"; 
    cout << "float: " << floNum << "\n";
    cout << "double: " << douNum << "\n";
    cout << "char: " << lettA << "\n";
    cout << "bool: " << booleanTru << "\n";
    cout << "string: " << strHi << "\n";

// I stored a value in the variables using assignment statements

    int inches; 
    inches = 100;

    cout << inches << " inches(es) = "; 
    cout << inches / 12 << " feet (foot) and ";
    cout << inches % 12 << " inch(es)" << endl;

// I used endl; to start a new line of code

    char char1 = 'E';
    char char2 = 'F';

    cout << "E < F = " << (char1<char2);

// I used the ASCII Character Chart, which gives every character a number value

    cout << "2 + 3.5 = " << 2 + 3.5 << endl;
    cout << "6 / 4 + 3.9 = " << 6 / 4 + 3.9 << endl;
    cout << "5.4 * 2 - (13.6 + 18 / 2) = " << 5.4 * 2 - (13.6 + 18 / 2) << endl;

return 0;

// all programs need to end with return 0;

}

// the last line of the body should end with closed swiggle bracket