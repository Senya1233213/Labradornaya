#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare_int(const void* a, const void* b) {
	return *(int*)a - *(int*)b; 
}

void bubble_sort(void* mas, size_t nmemb, size_t size, int (*compar)(const void*, const void*)) {
	char temp[10];

	for (int i = 0; i < nmemb; i++)
	{
		for (int j = 0; j < nmemb - 1; j++)
		{
			const void* t1 = (char*)mas + j * size;
			const void* t2 = (char*)mas + (j + 1) * size;

			if (compar(t1, t2) > 0) {
				memcpy(temp, t1, size);
				memcpy(t1, t2, size);
				memcpy(t2, temp, size);
			}
		}
	}
}

void select_sort(void* mas, size_t nmemb, size_t size, int (*compar)(const void*, const void*)) {
	char temp[10];

	for (int i = 0; i < nmemb; i++)
	{
		void* current = (char*)mas + i * size;

		void* t1 = (char*)mas + i * size;
		for (int j = i + 1; j < nmemb; j++)
		{
			void* t2 = (char*)mas + j * size;
			if (compar(t1, t2) > 0) {
				t1 = t2;
			}
		}
		memcpy(temp, current, size);
		memcpy(current, t1, size);
		memcpy(t1, temp, size);
	}
}

void insert_sort(void* mas, size_t nmemb, size_t size, int (*compar)(const void*, const void*)) {
	char temp[10];

	for (int i = 1; i < nmemb; i++)
	{
		void* t1 = (char*)mas + i * size;
		void* t2 = (char*)mas + (i - 1) * size;
		int j = i;
		while (j > 0 && compar(t2, t1) > 0)
		{
			memcpy(temp, t1, size);
			memcpy(t1, t2, size);
			memcpy(t2, temp, size);

			j--;
			if (j >= 0) {
				t1 = t2;
				t2 = (char*)mas + j * size;
			}
		}
	}
}

void fill_array(int* a, int n) {
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 100;
	}
}

void print_array(int* a, int n) {
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}


int main()
{
	int n = 10;
	int a[10];

	fill_array(a, n);
	print_array(a, n);

	printf("1.Bubble sort 2.Select sort 3.Insert sort 4.Piramid sort\n");
	int choice;
	scanf("%d", &choice);

	if (choice == 1) {
		bubble_sort(a, n, sizeof(int), compare_int);
	}
	else if (choice == 2) {
		select_sort(a, n, sizeof(int), compare_int);
	}
	else if (choice == 3) {
		insert_sort(a, n, sizeof(int), compare_int);
	}

	print_array(a, n);


}
