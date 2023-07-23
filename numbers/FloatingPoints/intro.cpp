#include<bits/stdc++.h>
using namespace std;

int main() {
    //double x = 65.47498556789654354;

    //printf("%.9f", x); // prints the values of `x` with 9 decimal places // 65.474985568

    double num = 0.3*3+0.1;
    printf("%.20f", num); // the result of the following code is surprising // 0.99999999999999988898

    double a = 1;
    double b = num;

    if (abs(a-b) < (1e-9)) {
        cout << "\na and b are equal.";
    } else {
        cout << "a and b are not equal.";
    }

    return 0;
}