#include<stdio.h>
#include<math.h>


float integral(float a, float b, float (*f)(float));

float f1(float);

float f2(float);

float circle(float);

void swap(int *a, int *b);

int main(void) {
    float x = integral(0.0, 5.0, circle);
    printf("%f", x);
}

float integral(float a, float b, float (*f)(float)) {
    float h, s;//h为划分后每一块的梯形高度
    int n = 100;
    s = ((*f)(a) + (*f)(b) )/ 2;
    h = (b - a) / n;
    for (int i = 0; i < n; ++i) {
        s += (*f)(a + i * h);
    }
    return s * h;

}

void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

float f1(float x) {
    return 1 + x * x;
}
float circle(float x) {
    return sqrtf(25-x*x);
}

float f2(float x) {
    return x / 1 + x * x;
}

