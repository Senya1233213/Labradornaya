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

int define_system(const char* number) {
	int max = 0;

	for (int i = 0; i < strlen(number); i++)
	{
		int val = get_num(number[i]);
		if (val > max) {
			max = val;
		}
	}
	return max + 1;
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

int main(int argc, char* argv[])
{
	if (argc != 3) {
		printf("Incorrect count arguments");
		return 1;
   }

	FILE* file = fopen(argv[1], "r");
	if (file == NULL) {
		printf("File %s not exist", argv[1]);
		return 2;
	}
	FILE* file_out = fopen(argv[2], "w");

	char number[100];
	while (!feof(file))
	{
		fscanf(file, "%s", number);

		int min_sys = define_system(number);
		int num_10 = convert(number, min_sys);

		fprintf(file_out, "%s %d %d\n", number, min_sys, num_10);
	}

	fclose(file);
	fclose(file_out);
}
