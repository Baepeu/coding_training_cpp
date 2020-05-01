#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;
    cout << "What is the input string? ";
    cin >> input;
    cout << input << " has " << input.length() << " characters." << endl;
    return 0;
}