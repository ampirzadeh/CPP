#include <iostream>

using namespace std;
int x=0;
int a=0;
int main()
{
    cout<<"Enter Number: ";
    cin >> x;
    a=x%2;
    if (a==0){cout << "even";}
    else {cout << "odd";}
    return 0;
}
