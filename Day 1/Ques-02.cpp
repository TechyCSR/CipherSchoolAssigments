#include <iostream>
#include <string>

using namespace std;

int main() {
    // Declare variables for the input strings
    string firstString, secondString;

    // Take input from the user
    cout << "Enter the first string: ";
    cin >> firstString;
    
    cout << "Enter the second string: ";
    cin >> secondString;

    // Concatenate the strings
    string concatenatedString = firstString + secondString;

    // Output the concatenated string
    cout << "Concatenated string: " << concatenatedString << endl;

    return 0;
}

