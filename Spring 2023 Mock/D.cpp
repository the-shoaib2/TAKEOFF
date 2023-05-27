// the.shoaib2
// D. Time to Prove
#include<bits/stdc++.h>

#define int long long

using namespace std;

signed main() {
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++) {
        int q;
        int e = 0;
        cout << "Case " << i << ":\n";
        cin >> q;
        for(int j = 0; j < q; j++) {
            int X, Y;
            cin >> X;
            if(X != 3) {
                cin >> Y;
                if(X == 1) e += Y;
                else if(X == 2) {
                    if((e - Y) < 0) e = 0;
                    else e -= Y;
                }
            }
            else if(X == 3) {
                cout << e << " units of energy\n";
            }
        }
        cout << "\n";
    }
    return 0;
}
