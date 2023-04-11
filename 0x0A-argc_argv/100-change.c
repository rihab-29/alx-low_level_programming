#include <stdio.h>
#include <stdlib.h>

/**
 * main -  prints the minimum number of coins to make change
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	if (argc == 2)
	{
	int i, l = 0, money = atoi(argv[1]);
	int coins[] = {25, 10, 5, 2, 1};

	for (i = 0; i < 5; i++)
	{
		if (money >= coins[i])
		{
			l += money / coins[i];
			money = money % coins[i];
			if (money % coins[i] == 0)
			{
				break;
			}
		}
	}
	printf("%d\n", l);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
