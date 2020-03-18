#include <stdio.h>

int main(void)
{

	int add = 3 + 7;
	printf("3 + 7 = %d\n", add);
	printf("%d + %d = %d\n", 3, 7, 3 + 7);

	int input;
	printf("값을 입력하세요 : ");
	scanf_s("%d", &input);
	printf("입력값 : %d\n", input);

	int one, two, three;
	printf("3개의 값 입력 : ", input);
	scanf_s("%d %d %d", &one, &two, &three);
	printf("%d\n", one);
	printf("%d\n", two);
	printf("%d\n", three);

	char c = 'A';
	printf("%c\n", c);

	char str[256];
	scanf_s("%s", str, sizeof(str));
	printf("%s\n", str);

	return 0;
}