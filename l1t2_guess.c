#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num, res, choice;
	while(1)
	{
		printf("Enter a number from 1 to 100\n");
		scanf("%d", &num);

		res = (rand() % 100) + 1;

		if(res == num)
			printf("Great!! Your guess is correct.\n");
		else if(num - res > 10)
			printf("No Your guess is too high, Correct number is %d.\n", res);
		else if(res - num > 10)
			printf("No Your guess is too low, Correct number is %d.\n", res);
		else
			printf("Ohh! Your guess is just missed, Correct number is %d.\n", res);

		printf("\nFor one more chance press '1'\n OR \nFor Exit enter any number other than 1\n");
		scanf("%d", &choice);

		if(choice != 1)
			break;
	}

	return 0;
}
