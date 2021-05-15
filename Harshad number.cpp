#include <iostream>

using namespace std;

bool isLooping = true;
int temp = 0;
int sum = 0;

int main()
{
    while (isLooping) {
        temp = 0;
        sum = 0;
        cin >> temp;
        
        sum += temp % 10;
        sum += (temp / 10) % 10;
        
        if (temp % sum == 0) {
            isLooping = false;
            cout << "Warning!";
        }
    }

    return 0;
}
