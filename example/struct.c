#include  <stdio.h>

typedef struct date {
    int year;
    int month;
    int day;
} DATE;

typedef struct student {
    long StdId;
    char StdName[10];
    char StdSex;
    DATE birthday;
    int score[4];
    float avg_score;
    int total_score;
} STUDENT;

void aveScore(STUDENT *p, int n, int m);

int main(void) {
    STUDENT student[30] = {{1128219, "张瑞纸", 'M', {2015, 12, 21}, {72, 89, 97, 85}},
                           {1128219, "张瑞纸", 'M', {2015, 12, 21}, {72, 89, 97, 85}},
                           {1128219, "张瑞纸", 'M', {2015, 12, 21}, {72, 89, 97, 85}},
                           {1128219, "张瑞纸", 'M', {2015, 12, 21}, {72, 89, 97, 85}},
                           {1128219, "张瑞纸", 'M', {2015, 12, 21}, {72, 89, 97, 85}}};

    STUDENT *p = student;
    aveScore(p, 5, 4);
    for (int i = 0; i < 5; ++i) {
//        aveScore(&p[i],);
    }
}

void aveScore(STUDENT *p, int n, int m) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            p[i].total_score += p[i].score[j];
        }
        p[i].avg_score = p[i].total_score / 4;
    }
}