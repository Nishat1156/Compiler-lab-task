#include <iostream>
#include <string>
using namespace std;

int main() {
string s;
cout << "Enter string: ";
cin >> s;

int state = 0; // q0 = start

for (int i = 0; i < s.length(); i++) {
char c = s[i];

switch (state) {
case 0: // q0
if (c == 'b') state = 1;
else if (c == 'a') state = 3;
else state = -1;
break;

case 1: // after b (expect a for ba)
if (c == 'a') state = 0;
else if (c == 'b') state = 2;
else state = -1;
break;

case 2: // b*
if (c == 'b') state = 2;
else if (c == 'a') state = 3;
else state = -1;
break;

case 3: // mandatory a done
if (c == 'a') state = 4;
else if (c == 'b' && i+1 < s.length() && s[i+1] == 'a') {
i++; // skip next a
state = 4;
}
else state = -1;
break;

case 4: // final loop
if (c == 'a') state = 4;
else if (c == 'b' && i+1 < s.length() && s[i+1] == 'a') {
i++;
state = 4;
}
else state = -1;
break;
}

if (state == -1)
break;
}

if (state == 3 || state == 4)
cout << "Valid String (Accepted by DFA)" << endl;
else
cout << "Invalid String (Rejected by DFA)" << endl;

return 0;
}
