#include <stdio.h>

int main(void)
{
	int age = 28;
	printf("%d\n", age);

	float weight = 70.0123;
	printf("%.2f\n", weight);

	double height = 177.99;
	printf("%.2lf\n", height);

	const int YEAR = 1993;
	printf("태어난 년도:: %d\n", YEAR);
	//YEAR = 1;

	int add = 3 + 7;
	printf("3 + 7 = %d\n", add);
	printf("%d + %d = %d\n", 3,7,3+7);

	return 0;
}