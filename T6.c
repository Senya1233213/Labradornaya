#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define BUFSIZ 10

int main()
{
	srand(time(0));

    int a[BUFSIZ];

	for (int i = 0; i < BUFSIZ; i++)
	{
		a[i] = rand() % 20001 - 10000;
	}

	for (int i = 0; i < BUFSIZ; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");

	int max = a[0];
	int imax = 0;

	int min = a[0];
	int imin = 0;

	for (int i = 0; i < BUFSIZ; i++)
	{
		if (a[i] > max) {
			max = a[i];
			imax = i;
		}
		if (a[i] < min) {
			min = a[i];
			imin = i;
		}
	}

	printf("Max = %d, position = %d\n", max, imax);
	printf("Min = %d, position = %d\n", min, imin);

	return 0;
}
