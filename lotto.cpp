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
	bool bol = true;
	for (int i = 0; i < 6; i++)
	{
		printf("정수값 입력 : ");
		scanf("%d", &input);

		for (int j = 0; j < i; j++)
		{
			if (input == lotto_nums[j])
			{	
				printf("같은 번호가 있습니다.\n");
				printf("정수값 입력 : ");
				
				while (scanf("%d", &input) == 1 && input == lotto_nums[j]) //scanf 는 입력받은 값을 리턴하는게 아닌, 입력에 성공한 변수의 개수를 입력한다.
					printf("정수값 입력 while : ");
					
				printf(input == lotto_nums[j] ? "true\n" : "false\n");
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

