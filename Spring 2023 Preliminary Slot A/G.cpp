// the.shoaib2
// G. Maximum Among Divisors
#include <stdio.h>
#include <math.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int a, b;
        scanf("%d", &a, &b);
        int sum = a + b;
        for (int i = 1; a <= ; i++)
        {
            int c = a % 2;
            int d /= c;

            if (a & d)
                printf("Prime\n");
            else
                printf("Not Prime\n");
        }
    }

    return 0;
}
