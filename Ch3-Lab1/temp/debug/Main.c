#include <stdio.h>
#include <stdlib.h>

int Odd(int U);
int Even(int U);
int TotalSum(int U);

int main(void)
{
	int n, sum=0;
	char AddChoice,l;

	printf("1+2+...+n�п�Jn=");	
	scanf("%d", &n, 1);
	scanf("%c", &l, 1);
	fflush(stdin);

	printf("�аݭn���_��(O)�A���ƩM(E)�A�٬O��ƩM(I)?�п��:");
	scanf("%c", &AddChoice);
	
	switch (AddChoice)
	{
	case 'O':
		sum = Odd(n);
		break;
	case 'E':
		sum = Even(n);
		break;
	case 'I':
		sum = TotalSum(n);
		break;
	default:
		printf("���~���\n");
		return -1;
	}
	printf("�`�M��%d\n",sum);
	system("pause");
	return 0;
}

int Odd(int U)
{
	int i, total = 0;
	for (i = 1; i <= U; i++)
		if (i % 2 == 1)
			total = total + i;
	return total;
}

int Even(int U)
{
	int i, total = 0;
	for (i = 1; i <= U; i++)
		if (i % 2 == 0)
			total = total + i;
	return total;
}

int TotalSum(int U)
{
	return Odd(U) + Even(U);
}