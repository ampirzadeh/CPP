//print out the average of a series of numbers//
#include <iostream>
using namespace std;

int main()
{
    int num;
    int input, sum=0, avg;
    cout << "How many numbers? :";
    cin >> num; 
    for(int i = 1; i <= num; i++){
        cout << "Enter Number: ";
        cin >> input;
        sum += input;
    }
    avg = sum / num;
    cout << "Average is " << avg << endl;
    
    return 0;
}