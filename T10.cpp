#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void my_strcat(char* destination, const char* source) {
	int len = strlen(destination);
	for (int i = 0; i < strlen(source); i++)
	{
		destination[len + i] = source[i];
	}
	destination[len + strlen(source)] = '\0';
}

int main()
{
	char s1[100];
	printf("Input first string: ");
	gets_s(s1, 100);

	char s2[100];
	printf("Input second string: ");
	gets_s(s2, 100);

	my_strcat(s1, s2);

	printf("Result: %s", s1);

	return 0;
}
