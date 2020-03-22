#include <stdio.h>

int main(void)
{

	for (int i = 1; i <= 10; i++) {
		printf("Hello World %d\n", i);
	}

	int i = 1;
	while (i <= 10) {
		printf("Hello World %d\n", i);
		i++;
	}

	/*
	*
	**
	***
	****
	*****
	*/
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	/*
	    *
	   **
	  ***
	 ****
	*****
	*/
	for (int i = 0; i < 5; i++)
	{
		for (int j = i; j < 5-1; j++)
		{
			printf(" ");
		}

		for (int k = 0; k <= i; k++)
		{
			printf("*");
		}
		printf("\n");
	}

	/*
	    *
	   ***
	  *****
	 *******
	*********
	*/
	for (int i = 0; i < 5; i++)
	{
		for (int j = i; j < 5 - 1; j++)
		{
			printf(" ");
		}

		for (int k = 0; k < i * 2 + 1; k++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}