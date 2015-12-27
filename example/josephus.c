#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct contact {
    char name[30];
    char phone[30];
    struct contact *next;
};

struct contact *head;


void list();

void create();

void read();

void delete();

void insert();

void ysfx();

void ysf();

int josephus(int n, int k);

int getMonkey(int n, int k);

int main() {
    int rest = getMonkey(45, 9);
    printf("%d",rest);
    ysfx();
}


int getMonkey(int n, int m) {
    int a[n],c,t;

    for (int i = 0; i < n; ++i) {
        a[i]=i;
    }

    c = n;
    t = 0;
    while (c > 1) {
        t = m % c + t;
        t = (t > c) ? t % c : t;
        t = t > 0 ? --t : 0;
        array_splice(a, t, 1);
        --c;
        t = t == 0 ? t = c : t;

    }
    return a;
}

void ysf() {
    int num[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int j = 1, cur = 0, n = 10, m = 3;

    for (int i = 1; i < 10; ++i) {
        printf("%d", cur);
        cur = (3 + cur) % i;
    }
    printf("%d", cur);
}

int josephus(int n, int k) {
    int s = 0;
    for (int i = 2; i <= n; i++)
        s = (s + k) % i;
    return s;
}

void ysfx() {
//    369
//    27
//    18
//    10
//    5
//    i+3/10
    int num[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int m = 3, n = 10, max;//m为数字,n为第几个退出,max为最大数
    for (int i = 0; i < n; ++i) {
        printf("%d \t", num[i]);
        if (num[i] == 0)continue;
        if (num[i] % 3 == 0) {
            num[i] = 0;
            continue;
        }
    }
    printf("\n");
    int j = 1, cur = 0;
    for (int i = 0; i < n; i++) {
        printf("%d \t", num[i]);

        if (num[i] == 0)continue;
        j++;
        cur = num[i];
        if (j == 3) {
            num[i] = 0;
            j = 0;
            continue;
        }
//   1     100%3
//   2     100%3+1
//   3     100%3+2
//        printf("%d \t", num[i]);
    }
    printf("\n");
    j = 2;
    for (int i = 0; i < n; ++i) {
        printf("%d \t", num[i]);
        if (num[i] == 0)continue;
        j++;
        cur = num[i];
        if (j == 3) {
            num[i] = 0;
            j = 0;
            continue;
        }
    }
    printf("\n");
    j = 0;
    for (int i = 0; i < n; ++i) {
        printf("%d \t", num[i]);

        if (num[i] == 0)continue;
        j++;
        cur = num[i];
        if (j == 3) {
            num[i] = 0;
            j = 0;
            continue;
        }
    }
    printf("\n");
    j = 1;
    for (int i = 0; i < n; ++i) {
        printf("%d \t", num[i]);

        if (num[i] == 0)continue;
        j++;
        cur = num[i];
        if (j == 3) {
            num[i] = 0;
            j = 0;
            continue;
        }
    }
    printf("\n");
    for (int i = 0; i < n; ++i) {
        printf("%d \t", num[i]);
    }
}

void create();

void read();

void delete();

void insert();

void list() {

}

