#include <stdio.h>

int main()
{
	int i = 1;
	int sum = 0;			// 1~10ÀÇ ÇÕ

	for (i; i <= 10; i++)
	{
		if (i % 2 == 1)
		{
			printf("%d - ", i);
			sum += i;
		}
		else if (i == 10)
		{
			printf("%d", i);
			sum -= i;
		}
		else
		{
			printf("%d + ", i);
			sum -= i;
		}
	}
	
	printf(" = %d\n", sum);

	return 0;
}