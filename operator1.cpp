#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;

    cout << "Enter a string: ";
    cin >> input;

    for (char c : input) {
        if (c == '+' || c == '-' || c == '*' || c == '/' || c == '%' || c == '=') {
            cout << "Operator: " << c << endl;
        }
    }

    return 0;
}
