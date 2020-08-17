#include<stdio.h>
#include<math.h>

int main() {
	int a, b, sum1 = 0, sum = 0;
	printf("Input 2 number : ");
	scanf("%d%d", &a, &b);
	if (a < b)
	{
		for (int i = a; i <= b; i++)
		{
			sum1 += pow(i, 2);
			if (i >= a && i < b)
			{
				printf("%d^2 + ", i);

			}
		}
		printf("%d^2 = ", b);
		printf("%d\n", sum1);

		printf("(");
		for (int i = a; i <= b; i++)
		{
			sum += i;
			if (i >= a && i < b)
			{
				printf("%d + ", i);
			}
		}
		printf("%d)^2 = ", b);
		printf("%d\n", sum * sum);
		printf("Difference between sum squares and square of the sum : %d \n", (sum * sum) - sum1);
	}

	if (b < a)
	{
		for (int i = b; i <= a; i++)
		{
			sum1 += pow(i, 2);
			if (i >= b && i < a)
			{
				printf("%d^2 + ", i);

			}
		}
		printf("%d^2 = ", a);
		printf("%d\n", sum1);

		printf("(");
		for (int i = b; i <= a; i++)
		{
			sum += i;
			if (i >= b && i < a)
			{
				printf("%d + ", i);
			}
		}
		printf("%d)^2 = ", a);
		printf("%d\n", sum * sum);
		printf("Difference between sum squares and square of the sum : %d \n", (sum * sum) - sum1);
	}

}