#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int my_strcmp(const char* s1, const char* s2) {
	int len_1 = strlen(s1);
	int len_2 = strlen(s2);

	int max_len = len_1;
	if (len_2 > max_len) {
		max_len = len_2;
	}

	for (int i = 0; i < max_len; i++)
	{
		if (s1[i] < s2[i]) {
			return -1;
		}
		else if (s1[i] > s2[i]) {
			return 1;
		}
	}

	return 0;
}

int main()
{
	char s1[100];
	printf("Input first string: ");
	gets_s(s1, 100);

	char s2[100];
	printf("Input second string: ");
	gets_s(s2, 100);

	int res = my_strcmp(s1, s2);
	printf("Result = %d\n", res);

	return 0;
}
