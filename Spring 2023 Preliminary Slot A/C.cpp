// the.shoaib2
// A World Cup Hero's New Challenge
#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c, d;
    double e, f, g, h;
    int m = 100, n = 75, o = 50, p = 25;

    scanf("%d %d %d %d", &a, &b, &c, &d);
    scanf("%lf %lf %lf %lf", &e, &f, &g, &h);

    double X = sqrt(pow(a - c, 2) + pow(b - d, 2));

    if (X <= e)
        printf("%d\n", m);
    else if (X <= f)
        printf("%d\n", n);
    else if (X <= g)
        printf("%d\n", o);
    else if (X <= h)
        printf("%d\n", p);

    return 0;
}
