#include <iostream>
#include <conio.h>
using namespace std;

const int MAX_N = 1000;

int a[MAX_N] = {5};
int siza = 1;

int b[MAX_N] = {4};
int sizb = 1;

void sum1() {
    int c[MAX_N];
    int sizc = 0;
    int dahbaryek = 0;
    for(int i = 0; i < max ( siza , sizb ); i++){
        c[i] += a[i] + b[i];
        c[i + 1] = c[i] / 10;
        c[i] %= 10;
    }
    if (c[max(siza , sizb)] == 1)
        sizc = max(siza , sizb) + 1;
    else
        sizc = max(siza , sizb);

    // for (int i =0; i< sizc; i++ ) {
    //     cout << c[i];
    // }
}

int compare2() {
    if(siza > sizb)
        return 1;
    else if ( siza < sizb )
        return 0;
    else {
        for (int i = siza; i >= 0; i--){
            if (a[i] < b[i]) {
                return 0;
            }
            else if (a[i] > b[i]) {
                return 1;
            } else {
                continue;
            }
        }
    }
}

void minus3_1(int bigger[], int smaller[]) {
    int c[MAX_N];
    int sizc = 0;
        for (int i = 0; i < siza; i++) {
            if ((bigger[i] - smaller[i]) >= 0) {
                c[i] = bigger[i] - smaller[i];
            } else {
                c[i] = (bigger[i] + 10) - smaller[i];
                bigger[i + 1] -= 1;
            }
            sizc++;
            // cout << c[i] << ",";
            
        }
        // cout << endl << "sizec: " << sizc;
}

void minus3() {
    if (compare2() == 1) {
        minus3_1(a, b);
    } else {
        minus3_1(b, a);
    }
}

int result[MAX_N];
int resultSize = 0;

void digitMultipledByArray(int num, int numbers[], int numbersSize, int shift) {
    int tmp = 0;
    for (int i = 0; i < shift; i++) {
        result[i] = 0;
    }
    for (int i = 0; i < numbersSize; i++) {
        result[shift] = (numbers[i] * num) % 10 + tmp;
        tmp = (numbers[i] * num) / 10;
        resultSize++;
    }
    result[numbersSize + 1] = tmp;
    resultSize++;
    
}

void multiply4() {
    int previous[MAX_N];
    int previousSize = 0;
    int c[MAX_N];
    int sizc = 0;
    for (int i = 0; i < sizb; i ++) {
        digitMultipledByArray(i, a, siza, i);
         
        for(int i = 0; i < max ( previousSize , resultSize ); i++){
            c[i] += previous[i] + result[i];
            c[i + 1] = c[i] / 10;
            c[i] %= 10;
        }
        if (c[max(previousSize , resultSize)] == 1)
            sizc = max(previousSize , resultSize) + 1;
        else
            sizc = max(previousSize , resultSize);
    
        for (int j = 0; j < sizc; j++) {
            previous[j] = c[j];
        }
        previousSize = sizc;
    }
    
    for (int i=0; i < resultSize; i++) {
        cout << result[i];
    }
}

int main() {
    // sum1();
    // cout << compare2();
    // minus3();
    // multiply4();
    return 0;
}
