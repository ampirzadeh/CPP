#include <iostream>
using namespace std;
int x, y, m;
int main()
{
   cout << "Enter first number: ";
   cin >> x;
   cout << "Enter second number: ";
   cin >> y;
   if (x < y)
   {
      m = x;
   }
   else
   {
      m = y;
   }
   while (m != 0)
   {
      if (x % m == 0 && y % m == 0)
      {
         break;
      }
      else
      {
         m -= 1;
      }
   }
   cout << "GCD of " << x << " and " << y << " is " << m << "." << endl;
   return 0;
}
