#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int permutation[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &permutation[i]);
    }

    int cost = 0;
    for (int i = 0; i < n; i++) {
        if (permutation[i] != i + 1) {
            int j = i;
            while (permutation[j] != i + 1) {
                j++;
            }
            int temp = permutation[j];
            permutation[j] = permutation[i];
            permutation[i] = temp;
            cost++;
        }
    }

    printf("%d\n", cost);
    for (int i = 0; i < n; i++) {
        printf("%d ", permutation[i]);
    }
    printf("\n");

    return 0;
}
