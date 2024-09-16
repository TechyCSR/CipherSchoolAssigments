#include <iostream>
#include <string>
using namespace std;

int stringLength(const string &str) {
    return str.length();
}

int main() {
    string str1 = "Hello, World!";
    cout << "Length of the string \"" << str1 << "\" is: " << stringLength(str1) << endl;

    // Test with more strings
    string str2 = "CipherSchools";
    cout << "Length of the string \"" << str2 << "\" is: " << stringLength(str2) << endl;

    return 0;
}
