//#include<stdio.h>
//
//int main() {
//	double a = 76.3;
//	double* aPtr;
//	double** aPtr2;
//	aPtr = &a;
//	aPtr2 = &aPtr;
//	printf("%lf\n", a);
//	printf("%lf\n", *aPtr);
//	printf("%lf\n", **aPtr2);
//
//	printf("%p\n", aPtr);
//	printf("%p\n", aPtr2);
//
//}


//pointer_Selection_Sort
#include<stdio.h>
void ABC(int* s, int k);
int main() {
    int a[30];
    for (int* i = a; i < a + 10; i++) {
        scanf("%d", i);
    }
    int l = 10;
    for (int* i = a; i < a + 10; i++) {
        ABC(i, l--);
    }
    for (int* i = a; i < a + 10; i++) {
        printf(" %d", *i);
    }
    return 0;
}

void ABC(int* s, int k) {
    int* m = s;
    int* i = s;
    k--;
    while (k--) {
        i++;
        if (*m < *i) {
            m = i;
        }
    }
    int tmp = *m;
    *m = *s;
    *s = tmp;
}
