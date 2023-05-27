#include <iostream>
using namespace std;

#define MOD 1000000007

// Function to calculate the maximum number of intersections
long long calculateIntersections(int n, int m, int AY, int BY, int AX[], int BX[]) {
    long long intersections = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (AY != BY || (AY == BY && AX[i] != BX[j])) {
                intersections++;
            }
        }
    }

    return intersections % MOD;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        int AY, BY;
        cin >> AY >> BY;

        int AX[n], BX[m];
        for (int i = 0; i < n; i++) {
            cin >> AX[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> BX[i];
        }

        long long intersections = calculateIntersections(n, m, AY, BY, AX, BX);
        cout << intersections / 2 << endl;
    }

    return 0;
}
