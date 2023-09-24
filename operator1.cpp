#include<iostream>
#include<string>
using namespace std;
int main() {
    string a;
    cout << "Please enter any equation you want";
    cin >>a;

    bool hasPlus = false;
    bool hasEqual = false;
    bool hasminus = false;
    bool hasdevie= false;
    bool hasparsent= false;
    bool hasmultiplication= false;
    for (char c : a) {
        if (c == '+'||c=='-'||c=='*'||c=='/'||c=='*'||c=='%'||c=='=') {
            hasPlus = true;
            hasparsent=true;
            hasmultiplication=true;
            hasminus=true;
            hasEqual=true;
            hasdevie=true;
        } else if (c == '+'||c=='-'||c=='*'||c=='/'||c=='*'||c=='%'||c=='=') {
            hasPlus = true;
            hasparsent=true;
            hasmultiplication=true;
            hasminus=true;
            hasEqual=true;
            hasdevie=true;
        }

    }

    if (hasPlus && hasEqual && hasdevie &&hasminus&&hasmultiplication && hasparsent) {
        cout << "There is an operation"<<endl;
    }
    else if (hasPlus && hasEqual && hasdevie &&hasminus&&hasmultiplication && hasparsent) {
        cout << "The input contains the two or more operator." << endl;
    }
    else {
        cout << "There is no operation" << endl;
    }

    return 0;
}



