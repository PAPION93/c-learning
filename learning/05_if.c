#include <stdio.h>
#include <time.h>

int main(void)
{
	int age = 20;

	//if else
	if (age >= 20)
	{
		printf("�����Դϴ�.\n");
	}
	else
	{
		printf("�л��Դϴ�.\n");
	}

	// if - else if
	if (age >= 8 && age <= 13)
	{
		printf("�ʵ�\n");
	}
	else if (age >= 14 && age <= 16)
	{
		printf("�ߵ�\n");
	}
	else if (age >= 17 && age <= 19)
	{
		printf("���\n");
	}
	else
	{
		printf("����\n");
	}


	// break
	for (int i = 1; i <= 10; i++)
	{
		if (i > 5)
		{
			break;
		}
		printf("Hello, I'm %d\n", i);
	}


	// continue
	for (int i = 1; i <= 5; i++)
	{
		if (i == 3)
		{
			continue;
		}
		printf("Hello, I'm %d\n", i);
	}


	// switch
	srand(time(NULL));
	int i = rand() % 3;
	switch (i)
	{
	case 0:
		printf("0\n");
		break;
	case 1:
		printf("1\n");
		break;
	case 2:
		printf("2\n");
		break;
	default:
		break;
	}

	return 0;
}