// the.shoaib2
//B. The Atmosphere Layer
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if (n >= 0 && n <= 15)
        printf("Troposphere\n");
    else if (n >= 16 && n <= 50)
        printf("Stratosphere\n");
    else if (n >= 51 && n <= 85)
        printf("Mesosphere\n");
    else if (n >= 86 && n <= 500)
        printf("Thermosphere\n");
    else if (n >= 501 && n <= 1000)
        printf("Exosphere\n");

    return 0;
}