#include <iostream>
#include <string>
using namespace std;

string concatenateStrings(const string &str1, const string &str2) {
    return str1 + str2;
}

int main() {
    string str1 = "Hello, ";
    string str2 = "World!";
    cout << "Concatenated string: " << concatenateStrings(str1, str2) << endl;

    string str3 = "Cipher";
    string str4 = "Schools";
    cout << "Concatenated string: " << concatenateStrings(str3, str4) << endl;

    return 0;
}
