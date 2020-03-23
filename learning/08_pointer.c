#include <stdio.h>

int main(void)
{
	// 포인터
	int a = 10;
	int b = 20;
	int c = 30;

	printf("%d, %d\n", &a, a);
	printf("%d, %d\n", &b, b);
	printf("%d, %d\n", &c, c);

	// 주소로 변수값 추출
	int* pointVal; // 포인터변수
	pointVal = &a;
	printf("주소 : %d, 값 : %d\n", pointVal, *pointVal);

	pointVal = &b;
	printf("주소 : %d, 값 : %d\n", pointVal, *pointVal);


	// 주소로 접근하여 변수값 바꾸기
	pointVal = &a;
	*pointVal = *pointVal * 3;
	printf("%d\n", *pointVal);
	printf("%d, %d\n", &a, a);

	int* spy = pointVal;
	printf("pointVal 주소 %d, 값 %d\n", pointVal, *pointVal);

	*spy = *spy - 2;
	printf("spy 주소 %d, 값 %d\n", spy, *spy);
	printf("a의 주소 %d, 값 %d\n", &a, a);
	printf("spy와 pointVal 주소 : %d, %d\n", &spy, &pointVal);

	return 0;
}