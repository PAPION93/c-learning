#include <stdio.h>

int main(void)
{
	// ������
	int a = 10;
	int b = 20;
	int c = 30;

	printf("%d, %d\n", &a, a);
	printf("%d, %d\n", &b, b);
	printf("%d, %d\n", &c, c);

	// �ּҷ� ������ ����
	int* pointVal; // �����ͺ���
	pointVal = &a;
	printf("�ּ� : %d, �� : %d\n", pointVal, *pointVal);

	pointVal = &b;
	printf("�ּ� : %d, �� : %d\n", pointVal, *pointVal);


	// �ּҷ� �����Ͽ� ������ �ٲٱ�
	pointVal = &a;
	*pointVal = *pointVal * 3;
	printf("%d\n", *pointVal);
	printf("%d, %d\n", &a, a);

	int* spy = pointVal;
	printf("pointVal �ּ� %d, �� %d\n", pointVal, *pointVal);

	*spy = *spy - 2;
	printf("spy �ּ� %d, �� %d\n", spy, *spy);
	printf("a�� �ּ� %d, �� %d\n", &a, a);
	printf("spy�� pointVal �ּ� : %d, %d\n", &spy, &pointVal);

	return 0;
}