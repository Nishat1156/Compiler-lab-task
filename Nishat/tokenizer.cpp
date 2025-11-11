#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <unordered_set>

using namespace std;

unordered_set<string> keywords = {
    "int", "float", "double", "char", "return", "if", "else", "while", "for", "break", "continue", "class", "public", "private", "void"
};

bool isKeyword(const string &word) {
    return keywords.find(word) != keywords.end();
}

bool isOperator(const string &word) {
    return (word == "+" || word == "-" || word == "*" || word == "/" || word == "=" || word == "==" || word == "!=");
}

bool isNumber(const string &word) {
    for (char ch : word) {
        if (!isdigit(ch)) {
            return false;
        }
    }
    return true;
}

void tokenizeLine(const string &line, int lineNumber) {
    stringstream ss(line);
    string token;


    cout << "In line " << lineNumber << ": " << endl;


    for (ss >> token; ss.good(); ss >> token) {
        if (isKeyword(token)) {
            cout << "Keyword: " << token << endl;
        }
        else if (isOperator(token)) {
            cout << "Operator: " << token << endl;
        }
        else if (isNumber(token)) {
            cout << "Number: " << token << endl;
        }
        else {
            cout << "Identifier: " << token << endl;
        }
    }
}

int main() {
    ifstream inputFile("nishat.txt");

    if (!inputFile) {
        cout << "Unable to open the file!" << endl;
        return 1;
    }

    string line;
    int lineNumber = 1;


    while (getline(inputFile, line)) {
        tokenizeLine(line, lineNumber);
        lineNumber++;
    }

    inputFile.close();
    return 0;
}
