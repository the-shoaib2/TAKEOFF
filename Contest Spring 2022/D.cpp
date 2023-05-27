// the.shoaib2
//D. Is Peter Guilty?
#include <stdio.h>

int main()
{
    int A, B, C, D;
    scanf("%d %d %d %d", &A, &B, &C, &D);

    if (A == 1)
        printf("YES\n");
    else
    {
        int count = B + C + D;
        (count >= 2)
            ? printf("YES\n")
            : printf("NO\n");
    }

    return 0;
}