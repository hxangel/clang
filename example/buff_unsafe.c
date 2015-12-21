#include <stdio.h>
#include <string.h>

int main(void) {
    char password[9] = "password", input[9];
    while (1) {
//        gets(input);
//        scanf("%8f",input);
        fgets(input, sizeof(input),stdin);
        if (strcmp(password, input) == 0) {
            printf("Welcome!");
            break;
        }
        printf("Sorry!");
    }

    return 0;
}