#include <stdio.h>

int main()
{
	int no = 1;
	int max = 1, min = 100;

	while (no >= 1)
	{
		printf(" input value(no): ");
		scanf(" %d", &no);

		if (no > max && no <= 100)
			max = no;
		if (no < min && no >= 1)
			min = no;

		if (no == 0)
		{	
			printf("max: %d, min:%d\n", max, min);
			return 0;
		}
		else if (no > 100)
			printf("-- Error --\n");
		else
			continue;
	}
}