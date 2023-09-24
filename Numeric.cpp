// Token identification
#include <iostream>
#include <string>
using namespace std;

bool a(const string& b) {
    for (char c : b) {
        if (!isdigit(c)) {
            return false;
        }
    }
    return true;
}

int main() {
    string b;

    cout << "Please enter your desire number";
    cin >> b;

    if (a(b)) {
        cout << "The number you give is a numeric constant" << endl;
    } else {
        cout << "The number you give is not a numeric constant" << endl;
    }

    return 0;
}
