#include <stdio.h>

int main()
{
	int posint = 1;			// positive integer 입력될 0포함 양수
	int sum = 0;		// 출력될 양수의 합
	double ave = 0;		// 출력될 평균(실수 결과)

	for (int i = 1; ; i++)
	{
		printf(">> input value: ");
		scanf(" %d", &posint);

		sum += posint;
		ave = (double)sum / (i-1);

		if (sum == 0)
		{
			printf("=====================\n");
			printf("-> Only 0 entered!\n");
			return 0;
		}
		if (posint == 0)
		{
			printf("=====================\n");
			printf("-> Sum: %d, Ave: %.1f\n", sum, ave);
			return 0;
		}
	}
}