#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>


int main(void)
{
	int count=0, i,size;
	char str[50];

	printf("문장을 입력 : ");
	fgets(str,sizeof(str),stdin);
	
	for (i = 0;i < sizeof(str); i++)
	{

		if ('A' <= str[i] && str[i] <= 'Z')
		{
			str[i] += 32;
			count += 1;
		}

	}
	
	printf("바뀐 문장 : %s바뀐 문자 수 : %d", str,count);
	
	
	return 0;
}