#include <iostream>

using namespace std;
int x,n,i=1;
int main()
{
    cout<<"Enter Number: ";
    cin >> x;
    cout<<"What Number?: ";
    cin>>n;
    while(i<n){
        x/=10;
        i++;
    }
    cout << x%10;
    return 0;
}
