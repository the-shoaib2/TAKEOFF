// the.shoaib2
//
#include <stdio.h>
#include <string.h>

int main() {
    int N;
    char S[1000];
    scanf("%d %s", &N, S);

    int str[26] = {0}; 
    for (int i = 0; i < N; i++) {
        str[S[i] - 'a']++;
    }

    int Mlen = 0;
    int count = 0;

    for (int i = 0; i < 26; i++) {
        if (str[i] % 2 == 0) {
            Mlen += str[i]; 
        } else {
            Mlen += str[i] - 1; 
            count++;
        }
    }

    if (count > 0) {
        Mlen++;
    }

    printf("%d\n", Mlen);

    return 0;
}
