// the,shoaib2
#include <stdio.h>
int main()
{
    int N,odd = 0, even = 0;;
    scanf("%d", &N);
    int arr[N];
    while(N--)
        scanf("%d", arr);
    for (int i = 0; i < N; i++)
    {
        (arr[i] % 2 == 0) ? even++ : odd++;
    }
    printf("%d %d\n", odd, even);

    return 0;
}
