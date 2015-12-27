#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

typedef struct contact {
    char name[30];
    char phone[30];
    struct contact *next;
};

struct contact *head;


void list();

void create();

void find();

void delete();

void insert();


int main() {
//    struct contact *pr;
//    char name[30];
//    char phone[30];
//    create(name, phone, *pr);
//    list();
    find();
}


void create() {
    struct contact *p, *pr;
//    scanf()
//    fflush();
    for (int i = 0; i < 5; ++i) {
        p = (struct contact *) malloc(sizeof(struct contact));
        if (p == NULL) {
            printf("No enough memory. \n");
            exit(0);
        }
        fgets(p->name, 30, stdin);
//        fgets(p->phone, 30, stdin);
        if (head == NULL) {
            head = p;
            pr = p;
            pr->next = NULL;
//            printf("%s", pr->name);
        } else {
            pr->next = p;
            pr = p;
            pr->next = NULL;
//            printf("%s", pr->name);
        }
    }
}

void find() {
    char *a = "eLLO";
    char *b = "LL";
    char *x = strstr("Hello", "Hell");
    printf("%s", x);
}

void read();

void delete() {
    struct contact *p, *pr;
    pr->next = p->next;
    free(p);
}

void insert() {
    struct contact *p, *pr;
    //头插入
    p->next = head;
    head = p;
    //中间插入
    p->next = pr->next;
    pr->next = p;
    //尾插入
    pr->next = p;
    p->next = NULL;
}

void list() {
    struct contact *p;
    p = head;
    int i = 0;
    while (p != NULL) {
        printf("%d:%s", i, p->name);
        i++;
        p = p->next;
    }
//    printf("%s", i, p->name);
}

