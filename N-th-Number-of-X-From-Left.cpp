#include <iostream>

using namespace std;
int x, n;
int main()
{
    cout << "Enter Number: ";
    cin >> x;
    cout << "What Number?: ";
    cin >> n;
    for (int i = 1; i < n; i++)
        x /= 10;
    cout << x % 10 << endl;
    return 0;
}
