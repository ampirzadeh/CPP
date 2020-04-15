#include <iostream>

using namespace std;

int printDivisors() {
    int a, b;
    cout << "Enter Number: ";
    cin >> a;
    for ( int i=1; i< a/2+1; i++) {
        if ( a % i ==0) {
            cout << i << endl;
        }
    }
    cout << a << endl;
    return 0;
}

int countDivisors() {
    int a, j = 1;
    cout << "Enter Number: ";
    cin >> a;
    for ( int i = 1; i < a / 2 + 1; i++) {
        if ( a % i ==0 ) {
            // cout << i << endl;
            j++;
         }
    }
    cout << j << endl;
    return 0;
}

int main() {
    string a;
    question:
        cout << "Do you want to count divisors?(y/n): ";
        cin >> a;
        if ( a == "y" || a == "Y" || a == "Yes" || a == "yes") {
            countDivisors();
        }
        else if ( a == "n" || a == "N" || a == "No" || a == "no") {
            printDivisors();
        }
        else {
            cout << "Failed, try again.";
            goto question;
        }
}