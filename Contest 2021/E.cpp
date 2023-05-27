// the.shoaib2
// E. Crack The Locker - I
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[10001];
    char str2[10001];
    char Password[10001] = "";
    int length, initial = 0;

    scanf("%s", str1);
    scanf("%d", &initial);
    scanf(" %[^\n]s", str2);
    initial -= 1;
    length = strlen(str2);
    int j = 0;
    int str1_len = strlen(str1); 
    for (int i = 0; i < length; i++)
    {
        if (str2[i] == 'L')
            initial = (initial - 1 + str1_len) % str1_len; 
        else if (str2[i] == 'R')
            initial = (initial + 1) % str1_len;
        else if (str2[i] == '+')
        {
            Password[j] = str1[initial];
            j++;
        }
    }
    Password[j] = '\0';
    printf("%s\n", Password);
    return 0;
}
