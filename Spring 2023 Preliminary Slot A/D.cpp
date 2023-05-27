// the.shoaib2
// G. Maximum Among Divisors
#include <stdio.h>
#include <math.h>
int main()
{
    int t, n;
    scanf("%d", &t, &n);
    int arr[t];
    int count = 0;

    for (int i = 0; i < t; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < t; i++)
    {
        if (arr[i] == n && arr[i] == t)
        {
            count += n;
        }
        else
        {
            count = 0;
            break;
        }
    }

    if (count)
        printf("Yeee! Argentina\n");
    else
        printf("Messi missed the penalty!\n");
    return 0;
}
