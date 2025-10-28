#include <iostream>
using namespace std;

int main() {
    string input;
    cout << "Enter the input string: ";
    cin >> input;

    if ((input[0] < 'A' || input[0] > 'Z') && (input[0] < 'a' || input[0] > 'z') && input[0] != '_') {
        cout << input << " is not a valid identifier." << endl;
        return 0;


    for (int i = 1; i < input.length(); i++) {
        if (!((input[i] >= 'A' && input[i] <= 'Z') || (input[i] >= 'a' && input[i] <= 'z')
              || (input[i] >= '0' && input[i] <= '9') || input[i] == '_')) {
            cout << input << " is not a valid identifier." << endl;
            return 0;
        }
    }

    cout << input << " is a valid identifier." << endl;
    return 0;
}
