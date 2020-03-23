#include <stdio.h>

int main(void)
{
	int arr[3] = { 5, 10, 15 };
	int* ptr = arr;

	for (int i = 0; i < 3; i++)
	{
		printf("배열 arr[%d] 의 값 : %d\n", i, arr[i]);
	}

	for (int i = 0; i < 3; i++)
	{
		printf("배열 ptr[%d] 의 값 : %d\n", i, ptr[i]);
	}

	printf("------------------------\n");

	ptr[0] = 100;
	ptr[1] = 200;
	ptr[2] = 300;

	for (int i = 0; i < 3; i++)
	{
		//printf("배열 arr[%d] 의 값 : %d\n", i, arr[i]);
		printf("배열 arr[%d] 의 값 : %d\n", i, *(arr + i));
	}

	for (int i = 0; i < 3; i++)
	{
		//printf("배열 ptr[%d] 의 값 : %d\n", i, ptr[i]);
		printf("배열 ptr[%d] 의 값 : %d\n", i, *(ptr + i));
	}

	// *(arr+i) == arr[i] 는 같은표현
	// arr == arr[0] 의 주소
	printf("arr 자체의 값의 주소 : %d\n", arr);
	printf("arr[0] 의 주소 : %d\n", &arr[0]);

	printf("*arr = %d\n", *arr);
	printf("*&arr[0] = %d\n", *&arr[0]);
	printf("arr[0] = %d\n", arr[0]);

	return 0;
}