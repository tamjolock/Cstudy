#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>


int main(void)
{
	int count=0, i,size;
	char str[50];

	printf("������ �Է� : ");
	fgets(str,sizeof(str),stdin);
	
	for (i = 0;i < sizeof(str); i++)
	{

		if ('A' <= str[i] && str[i] <= 'Z')
		{
			str[i] += 32;
			count += 1;
		}

	}
	
	printf("�ٲ� ���� : %s�ٲ� ���� �� : %d", str,count);
	
	
	return 0;
}