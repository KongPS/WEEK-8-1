#include <stdio.h>

int main()
{
	int x;
	scanf_s("%d", &x);
	if (x == 0)
	{
		printf("even");
	}
	while (x > 0)
	{
		x -= 2;
		if (x == 0)
		{
			printf("even");
		}
		if (x == -1)
		{
			printf("odd");
		}
	}
}