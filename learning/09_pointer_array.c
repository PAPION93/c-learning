#include <stdio.h>

void swap(int a, int b);
void changeArray(int* ptr);

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

	printf("------------------------\n");

	int a = 10;
	int b = 20;

	printf("a = %d, b = %d\n", a, b);
	swap(&a, &b);
	printf("a = %d, b = %d\n", a, b);

	printf("------------------------\n");

	int arr2[3] = { 10, 20, 30 };
	changeArray(arr2);
	for (int i = 0; i < 3; i++) {
		printf("%d\n", arr2[i]);
	}
	changeArray(&arr2[0]);
	for (int i = 0; i < 3; i++) {
		printf("%d\n", arr2[i]);
	}

	return 0;

}

void swap(int* a, int* b)
{
	printf("a = %d, b = %d\n", *a, *b);
	int temp = *a;
	*a = *b;
	*b = temp;
	printf("a = %d, b = %d\n", *a, *b);

}

void changeArray(int* ptr)
{
	ptr[2] = 50;
}