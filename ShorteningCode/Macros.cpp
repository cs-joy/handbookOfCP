#include<bits/stdc++.h>
using namespace std;

#define F first
#define S second
#define PB push_back
#define MP make_pair

#define REP(i, a, b) for(int i = a; i <= b; i++)


#define SQ(a) a*a

// better version of macro
#define SQR(a) (a)*(a)
int main() {
    vector<int> v {2, 3};
    int x1, y1, x2, y2;
    // After this, the code
    // v.push_back(make_pair(y1, x1));
    // v.push_back(make_pair(y2, x2));

    // int d = v[i].first+v[i].second;

    // can be shortened as follows:
    // v.PB(MP(y1, x1));
    // v.PB(MP(y2, x2));

    // int d = v[i].F+v[i].S;

    // after the line 9, the code:
    // for(int i=1; i<= n; i++) {
    //     search(i);
    // }

    // can be shortened as follows:
    // REP(i,1,y) {
    //     search(i);
    // }

    cout << SQ(3) << "\n"; // "9" this works as expected

    cout << SQ(3+3) << "\n"; // "15" this works not as expected, bug
    // corresponds to the code
    cout << 3+3*3+3 << "\n";

/////////////////////////////////////////////////////////////////////////////////
    cout << SQR(3) << "\n"; // "9" this works as expected
    cout << SQR(3+3) << "\n";// "15" this works not as expected, bug
    // corresponds to the code
    cout << (3+3) * (3+3) << "\n";

    return 0;
}