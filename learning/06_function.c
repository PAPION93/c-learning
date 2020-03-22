#include <stdio.h>

// 선언
void p(int num);
void func_without_return();
int func_with_return();
int apple(int total, int ate);

int main(void)
{
	p(1);
	func_without_return();
	p(func_with_return());
	printf("남은 사과는 %d개", apple(5, 2));

	return 0;
}

//정의
void p(int num)
{
	printf("num = %d\n", num);
}

void func_without_return()
{
	printf("반환값이 없음\n");
}

int func_with_return()
{
	printf("반환값이 있음\n");
	return 10;
}

int apple(int total, int ate)
{
	return total - ate;
}