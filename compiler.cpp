#include <iostream>
using namespace std;
int main(){
string input;

    bool isNumeric = true;

    cout << "Enter input: ";

    cin >> input;

    int i = 0;

    if (input[0] == '+' || input[0] == '-') {

        i = 1;


        if (input.length() == 1) {

            isNumeric = false;

        }

    }

    for (; i < input.length(); i++) {

        if (!isdigit(input[i])) {

            isNumeric = false;

            break;


        }
    }

     if (isNumeric)

        cout << "\"" << input << "\" is a numeric constant." << endl;

    else

        cout << "\"" << input << "\" is NOT a numeric constant." << endl;

    return 0;


}







