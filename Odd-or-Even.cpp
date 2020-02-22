#include <iostream>

using namespace std;
int x = 0;
int a = 0;
int main()
{
    cout << "Enter Number: ";
    cin >> x;
    a = x % 2;
    if (a == 0)
    {
        cout << x << "is an even number." << endl;
    }
    else
    {
        cout << x << "is an odd number." << endl;
    }
    return 0;
}
