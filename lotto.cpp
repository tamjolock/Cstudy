#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


void input_nums(int* lotto_nums);
void print_nums(int* lotto_nums);

int main(void)
{
	int lotto_nums[6];

	input_nums(lotto_nums);
	print_nums(lotto_nums);

	return 0;
}

void input_nums(int* lotto_nums)
{

	int input = 0;

	for (int i = 0; i < 6; i++)
	{
		printf("정수값 입력 : ");
		scanf("%d", &input);

		for (int j = 0; j < i; j++)
		{
			if (input == lotto_nums[j])
			{	
				printf("같은 번호가 있습니다.\n");
				
				while (scanf("%d",&input) == lotto_nums[j])
					printf("정수값 입력 : ");
					scanf(" %d", &input);
					
			}
		}

		lotto_nums[i] = input;
	}
}

void print_nums(int* lotto_nums)
{
	printf("로또 번호:");
	for (int i = 0; i < 6; i++)
	{
		printf("%d\t", lotto_nums[i]);
	}


}

