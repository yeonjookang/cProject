#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int main()
{
	int i = 0;
	int num[SIZE];

	for (i = 0; i < SIZE; i++)
	{
		num[i] = rand();
		printf("num[%d]:%d\n", i, num[i]);

	}

	return 0;
}