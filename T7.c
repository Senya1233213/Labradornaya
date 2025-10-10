#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int check_prime(int val_1) {
    if (val_1 == 1) {
        return 0;
    }
    if (val_1 == 2) {
        return 1;
    }
    if (val_1 % 2 == 0) {
        return 0;
    }
    for (int i = 3; i * i <= val_1; i += 2) {
        if (val_1 % i == 0) {
            return 0;
        }
    }
    return 1;
}

int check_vowel(char c) {
    c = tolower(c);
    char vowels[] = "aiouye";
    for (int i = 0; i < strlen(vowels); i++)
    {
        if (vowels[i] == c) {
            return 1;
        }
    }
    return 0;
}

void process(char* s) {
    for (int i = 0; i < strlen(s); i++)
    {
        if (check_vowel(s[i])) {
            if (i % 2 == 0) {
                s[i] = toupper(s[i]);
            }
        }
        else if (check_prime(i)) {
            s[i] = tolower(s[i]);
        }
    }
}

int main()
{
    char s[100];
    printf("Input string: ");
    gets_s(s, 100);

    process(s);

    printf("%s", s);

    return 0;
}
