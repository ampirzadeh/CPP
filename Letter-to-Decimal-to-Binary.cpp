#include <iostream>
using namespace std;
// function to convert decimal to binary
int decToBinary(int n)
{
    // array to store binary number
    int binaryNum[32];

    // counter for binary array
    int i = 0;
    while (n > 0)
    {

        // storing remainder in binary array
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }

    // printing binary array in reverse order
    for (int j = i - 1; j >= 0; j--)
        cout << binaryNum[j];
    cout << endl;
}
int main()
{
    int n;
    char letter;
    cout << "Enter the character to convert: ";
    cin >> letter;
    if (letter >= 65 and letter <= 90)
    {
        n = letter - 64;
    }
    else if (letter >= 97 and letter <= 132)
    {
        n = letter - 96;
    }
    else
    {
        cout << "error." << endl;
    }
    cout << "ASCII code of " << letter << " is " << (int)letter << ". " << letter << " is the " << n;
    switch (n)
    {
    case 1:
        cout << "st";
        break;
    case 2:
        cout << "nd";
        break;

    case 3:
        cout << "rd";
        break;

    default:
        cout << "th";
        break;
    }
    cout << " letter and in binarry would be: ";
    decToBinary(n);
}
