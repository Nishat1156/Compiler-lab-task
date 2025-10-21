#include <iostream>
using namespace std;

int main() {
    string input;
    cout << "Enter a line of code: ";
    cin >> input;

    int i;

    for (i = 0; i < input.length(); i++) {
        if (input[i] != ' ') {
            break;
        }
    }

    if (i + 1 < input.length() && input[i] == '/' && input[i + 1] == '/') {
        cout << "This is a single line comment." << endl;
        cout << "Comment: " << input << endl;
    } else {
        cout << "This is not a single line comment." << endl;
    }

    return 0;
}

