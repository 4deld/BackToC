#include<stdio.h>

int main() {
	double a = 76.3;
	double* aPtr;
	double** aPtr2;
	aPtr = &a;
	aPtr2 = &aPtr;
	printf("%lf\n", a);
	printf("%lf\n", *aPtr);
	printf("%lf\n", **aPtr2);

	printf("%p\n", aPtr);
	printf("%p\n", aPtr2);

}