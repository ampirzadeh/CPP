#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n, num_of_digits = 0, tmp, p10 = 1;
    cout << "Enter Number to Find all sqrts in it: ";
    cin >> n;
    tmp = n;
    while (tmp > 0)
    {
        num_of_digits++;
        tmp /= 10;
    }
    for (int i = 0; i < num_of_digits; i++)
    {
        p10 *= 10;
        tmp = n;
        for (int j = 0; j < num_of_digits - i; j++)
        {
            if (int(sqrt(tmp % p10)) == sqrt(tmp % p10))
            {
                cout << tmp % p10 << endl;
            }
            tmp /= 10;
        }
    }
    return 0;
}