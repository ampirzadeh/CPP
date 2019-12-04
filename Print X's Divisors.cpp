#include <iostream>

using namespace std;
int a,b,i=1;
int main()
{
    cout<<"Enter Number: ";
    cin >> a;
    while ( i < a){
        if ( a % i == 0){
            cout << i << endl;
        }
        i++;
    }
    return 0;
}
