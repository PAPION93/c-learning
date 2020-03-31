#include <stdio.h>
#include <time.h>

// 물이 마르기전에 어항에 물을 넣자

int level;
int arrayFish[6];
int* cursor;

void initData();
void printFishes();
void decreaseWater(elapsedTime);
int checkFishAlive();

int main(void)
{

	long startTime = 0; //게임 시작시간
	long totalElapsedTime = 0; // 총 경과시간
	long preElapsedTime = 0; // 직전 경과시간

	int num;

	initData();

	cursor = arrayFish;

	startTime = clock();
	while (1)
	{
		printFishes();
		printf("몇 번 어항에 물을 넣을까요?");
		scanf_s("%d", &num);

		if (num < 1 || num >6)
		{
			printf("입력값이 잘못되었습니다.\n");
			continue;
		}

		// 총 경과 시간
		totalElapsedTime = (clock() - startTime) / CLOCKS_PER_SEC;
		printf("총 경과 시간 : %ld 초\n", totalElapsedTime);

		// 직전 물 준 시간 이후로 흐른 시간
		preElapsedTime = totalElapsedTime - preElapsedTime;
		printf("최근 경과 시간 : %ld 초 \n", preElapsedTime);

		// 증발
		decreaseWater(preElapsedTime);

		// 물주기
		// 1. 물고기 죽음
		if (cursor[num - 1] <= 0)
		{
			printf("%d 물고기가 죽었습니다.\n", num);
		}

		// 2. 100 초과 할 수 없음
		if (cursor[num - 1] + 1 <= 100)
		{
			printf("%d번 어항에 물을 줍니다.\n\n", num);
			cursor[num - 1] += 1;
		}

		// 3. 레벨업 20초마다
		if (totalElapsedTime / 20 > level - 1)
		{
			level++;
			printf("**** 레벨업 %d->%d\n", level - 1, level);

			// 최종 레벨 
			if (level == 5)
			{
				printf("게임완료\n");
				exit(0);
			}
		}

		// 4. Game over check
		if (checkFishAlive() == 0)
		{
			printf("물고기 죽음\n");
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
	printf("%3d번 %3d번 %3d번 %3d번 %3d번 %3d번\n", 1, 2, 3, 4, 5, 6);
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