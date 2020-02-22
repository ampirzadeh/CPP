#include <iostream>  
using namespace std;  
int x,i=2;
bool isPrime=true;
int main()  
{  
  cout << "Enter Number: ";
  cin >> x;
  while (i<=x/2) {
      if (x%i==0){
      isPrime=false;
      break;
      }
    else {i++;}
  }
    if (isPrime)
    cout<< x << "is Prime" << endl;
    else
      cout<< x << " is Not Prime" << endl;
  return 0;  
}
