// the.shoaib2
// D. In The End
#include <stdio.h>
int main()
{
    int t, x, y, a, b;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d %d %d", &x, &y, &a, &b);
        int max = (x / a) * (y / b);
        printf("%d\n", max);
    }
    return 0;
}