#include <iostream>
using namespace std;

int main() {
    string line;

    cout << "Enter a line of code: ";
    getline(cin, line);


    if (line.substr(0, 2) == "//") {
        cout << "This is a single-line comment.\n";
    }

    else if (line.find("/*") != string::npos && line.find("*/") != string::npos) {

        size_t start = line.find("/*") + 2;
        size_t end = line.find("*/");


        string commentContent = line.substr(start, end - start);

        cout << "This is a multi-line comment:\n";
        cout << commentContent << endl;
    }
    else {
        cout << "This is not a comment.\n";
    }

    return 0;
}


