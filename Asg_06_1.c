#include <stdio.h>

int main()
{
	int n;				// �Է¹��� ���� ���� n
	int fac = 1;		// n!(factorial)�� �ٿ� fac 
	int i = 1;			// �ӽú��� i�� 1�� �ʱ�ȭ

	printf("Enter the desired 'factorial' value: ");
	scanf(" %d", &n);

	if (!(n >= 1 && n <= 10))
	{
		printf("Input error!\n");
		return 1;
	}

	printf("%d!= ", n);
	for (i = n; i >= 1; i--)
	{
		printf("%d", i);
		fac *= i;
		if (i > 1)
			printf("*");
		else
			printf("= %d\n", fac);
	}

	return 0;
}