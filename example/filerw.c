#include <stdio.h>
#include <stdlib.h>


void block();

int main() {
    block();
}


void block() {
    FILE *fp;
    char str[30];
    int writen_num,read_num;
    char filename[13] = "test.txt";
    fp = fopen(filename, "w+");
    if (fp == NULL) {
        printf("open file %s error", filename);
        exit(-1);
    }

    for (int i = 0; i < 26; ++i) {
        str[i] = (char) ('z' - i);
    }
    writen_num = fwrite(str, sizeof(char), 26, fp);
    printf("wrote %d items\n", writen_num);
    fclose(fp);
    fp = fopen(filename, "r+");
    if (fp == NULL) {
        printf("open file %s error", filename);
        exit(-1);
    }
    read_num = fread(str, sizeof(char), 26, fp);
    printf("read %d items\n", read_num);
    printf("buff:%.26s\n",str);
    fclose(fp);
}

