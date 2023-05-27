// the.shoaib2
// F. Mission Top Ten
#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    for (int i = 1; i <= T; i++)
    {
        double r;
        scanf("%lf", &r);

        double d = 2 * r;
        double Vallagena = d * d;
        double sohoj = 3.1416 * r * r;
        double isssshh = Vallagena - sohoj;

        printf("Case %d: %.4lf\n", i, isssshh);
    }

    return 0;
}
