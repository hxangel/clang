#include <stdio.h>

int main() {
    int num[] = {12, 42, 81, 99, 83, 11};
    int *p = num;
    printf("%d\n", *p+1);
    printf("%d\n", *p++);
    printf("%d", *(p+1));
}