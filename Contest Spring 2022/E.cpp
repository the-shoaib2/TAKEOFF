// the.shoaib2
//
#include <stdio.h>
int main()
{
    int n, spider, len = 0;
    scanf("%d %d", &n, &spider);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] >= spider)
            {
                count = 1;
                break;
            }
        }
        if (count)
        {
            break;
        }
    }
    if (count)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}