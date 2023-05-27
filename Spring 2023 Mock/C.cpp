// the.shoaib2
// C. In Search of a Friend
#include <stdio.h>
#include <math.h>

int main() {
    int N;
    scanf("%d", &N);
    long long MDis = -1;
    long long X, Y;

    for (int i = 0; i < N; i++) {
        long long A, B;
        scanf("%lld %lld", &A, &B);
        long long dis = A * A + B * B;
        if (MDis == -1 || dis < MDis) {
            MDis = dis;
            X = A;
            Y = B;
        }
    }
    printf("%lld %lld\n", X, Y);
    return 0;
}
