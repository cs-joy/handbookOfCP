#include<bits/stdc++.h>
using namespace std;

int main() {
    int n = 7;
    long long x = 1;
    int m = 7;

    for (int i=2; i<=n; i++) {
        x = (x*i)%m;
    }

    cout << x << " " << x%m;

    x = x%m;
    if (x<0) {
        x += m;
    }

    return 0;
}