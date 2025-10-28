#include <iostream>
using namespace std;

int main() {

    string firstName, lastName;


    cout << "Enter your first name: ";
    getline(cin, firstName);

    cout << "Enter your last name: ";
    getline(cin, lastName);

    string fullName = firstName + " " + lastName;


    cout << "Full name: " << fullName << endl;

    return 0;
}

