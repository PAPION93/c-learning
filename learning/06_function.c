#include <stdio.h>

// ����
void p(int num);
void func_without_return();
int func_with_return();
int apple(int total, int ate);

int main(void)
{
	p(1);
	func_without_return();
	p(func_with_return());
	printf("���� ����� %d��", apple(5, 2));

	return 0;
}

//����
void p(int num)
{
	printf("num = %d\n", num);
}

void func_without_return()
{
	printf("��ȯ���� ����\n");
}

int func_with_return()
{
	printf("��ȯ���� ����\n");
	return 10;
}

int apple(int total, int ate)
{
	return total - ate;
}