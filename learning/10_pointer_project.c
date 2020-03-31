#include <stdio.h>
#include <time.h>

// ���� ���������� ���׿� ���� ����

int level;
int arrayFish[6];
int* cursor;

void initData();
void printFishes();
void decreaseWater(elapsedTime);
int checkFishAlive();

int main(void)
{

	long startTime = 0; //���� ���۽ð�
	long totalElapsedTime = 0; // �� ����ð�
	long preElapsedTime = 0; // ���� ����ð�

	int num;

	initData();

	cursor = arrayFish;

	startTime = clock();
	while (1)
	{
		printFishes();
		printf("�� �� ���׿� ���� �������?");
		scanf_s("%d", &num);

		if (num < 1 || num >6)
		{
			printf("�Է°��� �߸��Ǿ����ϴ�.\n");
			continue;
		}

		// �� ��� �ð�
		totalElapsedTime = (clock() - startTime) / CLOCKS_PER_SEC;
		printf("�� ��� �ð� : %ld ��\n", totalElapsedTime);

		// ���� �� �� �ð� ���ķ� �帥 �ð�
		preElapsedTime = totalElapsedTime - preElapsedTime;
		printf("�ֱ� ��� �ð� : %ld �� \n", preElapsedTime);

		// ����
		decreaseWater(preElapsedTime);

		// ���ֱ�
		// 1. ����� ����
		if (cursor[num - 1] <= 0)
		{
			printf("%d ����Ⱑ �׾����ϴ�.\n", num);
		}

		// 2. 100 �ʰ� �� �� ����
		if (cursor[num - 1] + 1 <= 100)
		{
			printf("%d�� ���׿� ���� �ݴϴ�.\n\n", num);
			cursor[num - 1] += 1;
		}

		// 3. ������ 20�ʸ���
		if (totalElapsedTime / 20 > level - 1)
		{
			level++;
			printf("**** ������ %d->%d\n", level - 1, level);

			// ���� ���� 
			if (level == 5)
			{
				printf("���ӿϷ�\n");
				exit(0);
			}
		}

		// 4. Game over check
		if (checkFishAlive() == 0)
		{
			printf("����� ����\n");
			exit(0);
		}
		
		preElapsedTime = totalElapsedTime;

	}

	return 0;
}

void initData()
{
	level = 1;
	for (int i = 0; i < 6; i++) {
		arrayFish[i] = 100;
	}

}

void printFishes()
{
	printf("%3d�� %3d�� %3d�� %3d�� %3d�� %3d��\n", 1, 2, 3, 4, 5, 6);
	for (int i = 0; i < 6; i++) {
		printf(" %4d ", arrayFish[i]);
	}

	printf("\n\n");
}


void decreaseWater(elapsedTime)
{
	for (int i = 0; i < 6; i++) {
		arrayFish[i] -= (level * 3 * (int)elapsedTime);
		if (arrayFish[i] < 0)
		{
			arrayFish[i] = 0;
		}
	}
}

int checkFishAlive()
{
	for (int i = 0; i < 6; i++)
	{
		if (arrayFish[i] > 0)
		{
			return 1;
		}

		return 0;
	}
}