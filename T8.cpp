#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse(char* s) {
    int n = strlen(s);
    for (int i = 0; i < n / 2; i++)
    {
        char t = s[i];
        s[i] = s[n - 1 - i];
        s[n - 1 - i] = t;
    }
}

int main()
{
    char s[100];
    printf("Input string: ");
    gets_s(s, 100);

    reverse(s);
    printf("%s", s);
}
