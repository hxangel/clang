#include <stdio.h>
#include <string.h>

#define N 80

char *MyStrcat(char *dest, char *source);

int main(void) {
    char first[30] = " Hello";
    char *second = " World";
    char *result;

    result = MyStrcat(first, second);
    printf("The result is : %s\n", result);
    return 0;
}

char *MyStrcat1(char *dest, char *source) {
    int i = 0, j = 0;
    while (*(dest + i) != '\0')
        i++;
    for (; *(source + j) != 0; i++, j++) {
        *(dest + i) = *(source + j);
    }
    *(dest + i) = '\0';
    return dest;
}

char *MyStrcat(char *dest, char *source) {
    int dest_len;
    dest_len = strlen(dest);
    for (int i = 0; i < strlen(source) + 1; ++i) {
        *(dest + dest_len + i) = *(source + i);
    }
    return dest;
}