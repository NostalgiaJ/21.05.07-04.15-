#include <stdio.h>

int main()
{
	int posint = 1;			// positive integer �Էµ� 0���� ���
	int sum = 0;		// ��µ� ����� ��
	double ave = 0;		// ��µ� ���(�Ǽ� ���)

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