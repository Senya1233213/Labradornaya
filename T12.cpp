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

void convert(int n, int d, char* res) {
    char s[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int index = 0;

    while (n > 0)
    {
        int ost = n % d;
        res[index] = s[ost];
        index++;
        n = n / d;
    }

    res[index] = '\0';
    reverse(res);
}

int main()
{
    int n;
    printf("Input number: ");
    scanf("%d", &n);

    int d;
    printf("Input system: ");
    scanf("%d", &d);

    char res[100];

    convert(n, d, res);

    printf("Result = %s", res);

    return 0;
}
