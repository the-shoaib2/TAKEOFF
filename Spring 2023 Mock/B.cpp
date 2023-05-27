// the.shoaib2
//
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if (n < 21)
        printf("Sorry, you are too young to vote.\n");
    else if (n < 23)
        printf("Wait a little more to vote.\n");
    else
        printf("Yes, you can vote.\n");
    return 0;
}