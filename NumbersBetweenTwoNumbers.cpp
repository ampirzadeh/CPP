#include <iostream>

using namespace std;

int odd() {
    int a, b;
    cout << "Enter First Number: ";
    cin >> a;
    cout << "Enter Second Number: ";
    cin >> b;
    if(a%2==0){
        a+=1;
    }
    else {
        a+=0;
    }
    for (int i=a; i<b; i++) {
        cout << i << endl;
        i+=1;
    }
    return 0;
}
int main() {
    string oe;
    cout << "Odd or Even(o/e): ";
    cin >> oe;
    if ( oe == "o" || oe == "O" || oe == "Odd" || oe == "odd") {
        odd();
    }
}