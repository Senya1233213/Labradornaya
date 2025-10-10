#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int check_palindrome(char* s) {
	int n = strlen(s);
	for (int i = 0; i < n / 2; i++)
	{
		if (s[i] != s[n - 1 - i]) {
			return 0;
		}
	}
	return 1;
}

int main()
{
	char s[100];
	printf("Input string: ");
	gets_s(s, 100);

	if (check_palindrome(s) == 1) {
		printf("YES");
	}
	else {
		printf("NO");
	}
}
