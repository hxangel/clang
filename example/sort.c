#include<stdio.h>


void sort(int a[], int n, int (*f)(int, int));

int desc(int, int);

int asc(int, int);

void swap(int *a, int *b);

int main(void) {
    int a[10] = {12, 18, 82, 43, 4, 25, 6, 67, 38, 49};
    sort(a, 10, asc);
    for (int i = 0; i < 10; ++i) {
        printf("%d  ", a[i]);
    }
}

void sort(int a[], int n, int (*f)(int, int)) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < i; ++j) {
            if ((*f)(a[i], a[j])) {
                swap(&a[i], &a[j]);
            }
        }
    }
}

void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
//void swap(int *p1, int *p2){
//    int temp;  //临时变量
//    temp = *p1;
//    *p1 = *p2;
//    *p2 = temp;
//}

int desc(int x, int y) {
    return x > y;
}

int asc(int x, int y) {
    return x < y;
}

int add(int x, int y) {
    printf("add:");
    return x + y;
}