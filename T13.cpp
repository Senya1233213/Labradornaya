#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int get_num(char c) {
    char s[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == c) {
            return i;
        }
    }
    return -1;
}

int convert(const char* s, int d) {
    int res = 0;
    int step = 0;
    for (int i = strlen(s) - 1; i >= 0; i--)
    {
        int k = get_num(s[i]);
        res += k * pow(d, step);
        step++;
    }
    return res;
}

int main()
{
    char s[100];
    printf("Input number: ");
    scanf("%s", s);

    int d;
    printf("Input system: ");
    scanf("%d", &d);

    int res = convert(s, d);
    printf("Result: %d", res);

    return 0;
}
