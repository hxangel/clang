#include <stdio.h>
#include <string.h>
#define N 80
char* MyStrcat(char *dest, char *source);
int main(void)
{
    char first[2*N+1];
    char second[N+1];
    char *result;
    printf("Input the first string:");
    gets(first);
    printf("Input the second string:");
    gets(second);
    result = MyStrcat(first, second);
    printf("The result is : %s\n", result);
    return 0;
}
char* MyStrcat(char *dest, char *source) {
    int i = 0, j = 0;
    while (*(dest + i) != '\0')
        i++;
    for (; *(source + j) != 0; i++, j++) {
        *(dest + i) = *(source + j);

    }
    *(dest + i) = '\0';
    return dest;
}