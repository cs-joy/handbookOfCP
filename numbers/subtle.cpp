#include<bits/stdc++.h>
using namespace std;

int main() {
/**
 * subtle error
 * 
    int num = 123456789;

    long long lnum = num * num;

    cout << lnum; // -1757895751
*/
    // Solution \/1
    int num = 123456789;
    long long n = (long long) num * num;

    cout << n << "\n";

    // Solution \/2
    long long numb = 123456789;
    long long result = numb * numb;
    cout << result << "\n";

    return 0;
}