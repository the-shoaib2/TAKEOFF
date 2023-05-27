// the.shoaib2
// H. Crack The Locker - II
#include <stdio.h>

int main()
{
    int S;
    scanf("%d", &S);
    while (S--)
    {
        int n;
        scanf("%d", &n);
        int prime = 0;
        for (int i = 2; i <= n / 2; i++)
        {
            int primeI = 1;
            for (int j = 2; j * j <= i; j++)
            {
                if (i % j == 0)
                {
                    primeI = 0;
                    break;
                }
            }
            int primeN = 1;
            for (int j = 2; j * j <= (n - i); j++)
            {
                if ((n - i) % j == 0)
                {
                    primeN = 0;
                    break;
                }
            }
            if (primeI && primeN)
            {
                prime = 1;
                break;
            }
        }
        if (prime)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
