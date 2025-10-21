#include <iostream>
using namespace std;

int main() {
    string input;
    cout << "Enter an expression: ";
    cin >> input;

    int operatorNumber = 1;

    for (int i = 0; i < input.length(); i++) {
        char ch = input[i];
        if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '%' || ch == '=') {
            cout << "operator" << operatorNumber << ": " << ch << endl;
            operatorNumber++;
        }
    }

    if (operatorNumber == 1) {
        cout << "No operators found." << endl;
    }

    return 0;
}
