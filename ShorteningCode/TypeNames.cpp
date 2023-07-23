#include<bits/stdc++.h>
using namespace std;

int main() {
    long long a = 45690967;
    long long b = 12390093;
    cout << a*b << "\n";

    // can be written as
    typedef long long ll;
    ll x = 34568956;
    ll y = 340745457;
    cout << x*y << "\n";

    // `typedef` can also be used with more complex types.
    typedef vector<int> vi; // `vi` for a vector of integers
    typedef vector<int, int> pi; // `pi` for a pair that contains two integers

    vi {1, 2, 3};
    pi {(8,1), (4, 0)};

    return 0;
}