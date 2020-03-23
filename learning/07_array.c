#include <stdio.h>

int main(void)
{

	int subway_array[3];

	subway_array[0] = 30;
	subway_array[1] = 40;
	subway_array[2] = 50;

	for (int i = 0; i < 3; i++)
	{
		printf("지하철 %d호차에 %d명이 타고있습니다.\n", i, subway_array[i]);
	}

	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}

	// 배열 크기는 항상 상수로 선언
	//int arr[10];

	// 3번째 값부터 0으로 자동 초기화
	int arr2[10] = { 1, 2 };
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr2[i]);
	}

	// 문자와 문자열
	char c = 'A';
	printf("%c\n", c);

	// 문자열 끝에는 NULL(\0)이 포함되어야함
	char str[7] = "coding";
	printf("%s\n", str);


	char str2[] = "test123";
	printf("%s\n", str2);
	printf("%d\n", sizeof(str2));

	for (int i = 0; i < sizeof(str2); i++)
	{
		printf("%c\n", str2[i]);
	}


	char c_array[10] = { 'c', 'o', 'd', 'i', 'n', 'g', '\0' };
	printf("%s\n", c_array);
	for (int i = 0; i < sizeof(c_array); i++)
	{
		printf("%c\n", c_array[i]);
	}


	printf("--END--");
	return 0;
}
