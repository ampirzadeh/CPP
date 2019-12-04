#include <iostream>  
using namespace std;  
int x,i=2,y;
int main()  
{  
  cout << "Enter Number: ";
  cin >> x;
  while (i<x){
      y=x%i;
      i++;
  }
    if (y!=0){cout<< "Prime";}
    else {cout<<"Not Prime";}
  return 0;  
}
