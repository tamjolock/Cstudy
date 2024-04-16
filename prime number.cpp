#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>



int main(void)
{
	int num, i;
	int coin = 0, next = 0;
	int count = 2;
	
	printf("2이상의 정수를 입력:");
	scanf("%d", &num);

	while (count <= num)
	{
		for (i = 1;i < count;i++) {
			if (count % i == 0) coin += 1;
		}

		if (coin == 1)
		{
			printf("\t%d", count);
			next += 1;
		}

		if (next == 5)
		{
			printf("\n");
			next = 0;
		}

		coin = 0;
		count++;
	}
}