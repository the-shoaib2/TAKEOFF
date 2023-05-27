// the.shoaib2
//
#include <stdio.h>

int main() {
    int N, K, X;
    int tuition_fee, total_cost;
    scanf("%d %d %d", &N, &K, &X);
    tuition_fee = N * K;
    total_cost = tuition_fee + X;
    printf("%d\n", total_cost);

    return 0;
}
