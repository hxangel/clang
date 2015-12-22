#include <stdio.h>

void rangeByArr(int arr[][6]);

void rangeByPoint(int *p);

void rangeByPoint2(int *p);

int main() {
    int num[][6] = {{12, 42, 81, 99, 83, 11},
                    {13, 42, 81, 99, 83, 11},
                    {43, 42, 81, 99, 83, 11}};
    int *p, *p1;
    p = &num[0][0];
    p1 = *num;
//    rangeByArr(num);
    rangeByPoint(p);
//    rangeByPoint2(p1);
}

void rangeByArr(int arr[][6]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 6; ++j) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

void rangeByPoint(int *p) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 6; ++j) {
            printf("%d ", p[i * 6 + j]);
        }
        printf("\n");
    }
}

void rangeByPoint2(int *p) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 6; ++j) {
            printf("%d ", *(p + i * 6 + j));
        }
        printf("\n");
    }
}