#include <iostream>
#include <string>
using namespace std;

int countCharacter(const string &str, char ch) {
    int count = 0;
    for (char c : str) {
        if (c == ch) {
            count++;
        }
    }
    return count;
}

int main() {
    string str = "Hello, World!";
    char ch = 'l';
    cout << "Character '" << ch << "' occurs " << countCharacter(str, ch) << " times in the string \"" << str << "\"." << endl;

    // Test with more strings and characters
    string str2 = "CipherSchools";
    char ch2 = 'o';
    cout << "Character '" << ch2 << "' occurs " << countCharacter(str2, ch2) << " times in the string \"" << str2 << "\"." << endl;

    return 0;
}
