#include <iostream>
using namespace std;

int big = 0;
int x = 0;
int n;
int main()
{
    cout << "How Many Numbers?: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter Number: " << endl;
        cin >> x;
        if (x > big)
        {
            big = x;
        }
    }
    cout << "Biggest Number is: " << big << endl;
    return 0;
}