#include<stdio.h>

void fun(int x, int y, int (*f)(int, int));

int max(int, int);

int min(int, int);

int add(int, int);

int main(void) {
    int a, b;
    scanf("%d,%d", &a, &b);
    fun(a, b, max);
    fun(a, b, min);
    fun(a, b, add);
}

void fun(int x, int y, int (*f)(int, int)) {
    int res;
    res = (*f)(x, y);
    printf("%d\n", res);
}

int max(int x, int y) {
    printf("max:");
    return x > y ? x : y;
}

int min(int x, int y) {
    printf("min:");
    return x < y ? x : y;
}

int add(int x, int y) {
    printf("add:");
    return x + y;
}