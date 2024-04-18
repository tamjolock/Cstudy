/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int rec_func(int n);

int main(void)
{
	int sum = 0;
	sum = rec_func(10);

	printf("%d", sum);
	
	return 0;
}


int rec_func(int n)
{
	int sum = 0;
	int num = n;

	if (n == 1) return n;
	
	int my = rec_func(n - 1);
	
	sum = my + n;
	printf("sum : %d, my: %d, n: %d\n", sum, my, n);
	return sum;
}*/