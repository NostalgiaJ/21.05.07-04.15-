#include <stdio.h>

int main()
{
	int n;				// 입력받을 양의 정수 n
	int fac = 1;		// n!(factorial)을 줄여 fac 
	int i = 1;			// 임시변수 i를 1로 초기화

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