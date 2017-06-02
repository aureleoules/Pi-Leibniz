#include <stdio.h>
#include <iostream>
using namespace std;
const int PRECISION = 10000000;
// PI/4 = 1/1 - 1/3 + 1/5 - 1/7 + 1/9 - 1/11

double getPI(int decimals) {
    double pi = 1.0, p;
    for(int i = 1; i <= PRECISION; ++i) {
        if(i % 2 == 0) {
            p = 1.0;
        } else {
            p = -1.0;
        }
        // This is going to check wether it should be a + or - since the Leibniz formula is once: minus, then plus, etc.
        pi += p / (2*i + 1);
    }    
    printf("%.*f", decimals, 4*pi);
    return 4*pi;
}


int main() {
    int decimals;
    printf("How many decimals do you want? ");
    cin >> decimals;
    getPI(decimals);

    return 0;
}