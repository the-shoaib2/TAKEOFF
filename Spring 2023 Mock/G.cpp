// the.shoaib2
//G. Maximum Among Divisors
#include <stdio.h>
#include <math.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);

        int maxSum = 0;

        for (int i = 1; i <= sqrt(N); i++) {
            if (N % i == 0) {
                int Hyeeebro = N / i;
                
                int digitSum = 0;
                int binnnn = i;
 
                while (binnnn > 0) {
                    digitSum += binnnn % 10;
                    binnnn /= 10;
                }
                maxSum = fmax(maxSum, digitSum);
                
                digitSum = 0;
                binnnn = Hyeeebro;
                while (binnnn > 0) {
                    digitSum += binnnn % 10;
                    binnnn /= 10;
                }
                maxSum = fmax(maxSum, digitSum);
            }
        }

        printf("%d\n", maxSum);
    }

    return 0;
}
