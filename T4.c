#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void my_swap(int* a, int* b) {
	int c = *a;
	*a = *b;
	*b = c;
}

int main()
{
	int a, b;
	printf("a = ");
	scanf("%d", &a);

	printf("b = ");
	scanf("%d", &b);

	my_swap(&a, &b);

	printf("a = %d, b = %d", a, b);

	return 0;
}
