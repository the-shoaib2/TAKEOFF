// the.shoaib2
// F. The DIU Job Fair
#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        long long int L, R;
        int D;
        scanf("%lld %lld %d", &L, &R, &D);

        long long int count = 0;
        for (long long int i = L; i <= R; i++) {
            long long int lastDigit = i % 10;
            if (lastDigit == D)
                count++;
        }

        printf("%lld\n", count);
    }
    return 0;
}
