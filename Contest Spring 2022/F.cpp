// the.shoaib2
//F. Even Peter Tingle Can't Help
#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); 

    for (int i = 1; i <= T; i++) {
        int A, B;
        scanf("%d %d", &A, &B);

        int gcd = 1;
        for (int j = 1; j <= A && j <= B; j++) {
            if (A % j == 0 && B % j == 0) {
                gcd = j; 
            }
        }

        int result = (A / gcd) * B; 

        printf("Case %d: %d\n", i, result); 
    }

    return 0;
}
