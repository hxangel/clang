#include <stdio.h>
#include <stdlib.h>


void filesteam();

void filewrite();

void fileread();

void writeline();

int main() {
//    filewrite();
//    fileread();
    writeline();
}

void filewrite() {
    FILE *fp;
    int ch;
    char filename[13] = "test.txt";
    fp = fopen(filename, "w+");
    if (fp == NULL) {
        printf("open file %s error", filename);
        exit(-1);
    }
    ch = getchar();
    while (ch != '\n') {
        fputc(ch, fp);
        ch = getchar();
    }
    fclose(fp);

}

void writeline() {
    FILE *fp;
    char str[20];
    int ch;
    char filename[13] = "test.txt";
    fp = fopen(filename, "w+");
    if (fp == NULL) {
        printf("open file %s error", filename);
        exit(-1);
    }
    fgets(str, sizeof(str), stdin);
    fputs(str, fp);
    fclose(fp);
    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("open file %s error", filename);
        exit(-1);
    }
    fgets(str, sizeof(str), fp);
    puts(str);
    fclose(fp);
}

void fileread() {
    FILE *fp;
    int ch;
    long pos;
    char filename[13] = "test.txt";
    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("open file %s error", filename);
        exit(-1);
    }
    ftell(fp);
//    ch = fgetc(fp);
//    while (ch != EOF) {
//        putchar(ch);
//        ch = fgetc(fp);
//    }
    pos = ftell(fp);
    ch = fgetc(fp);
    while (!feof(fp)) {
        printf("%c,%ld\n", ch, pos);
        pos = ftell(fp);
        ch = fgetc(fp);
    }
    fclose(fp);

}

void filesteam() {

    FILE *stream;

    int i;
    float f;
    char s[81];
    char c;
    char fileName[13] = "./fscanf.out";
    stream = fopen("fscanf.out", "w+");
    if (stream == NULL) {
        printf("open file %s error", fileName);
        exit(-1);
    }
    fprintf(stream, "%s\t%d\t%f\t%c", "I-am-a-string", 65000, 3.141592654, 'x');
    fseek(stream, 0L, SEEK_SET);
    //一定得按顺序读取
    fscanf(stream, "%s\t", s);
    fscanf(stream, "%d\t", &i);
    fscanf(stream, "%f\t", &f);
    fscanf(stream, "%c\t", &c);
    printf("%s\n%d\n%f\n%c", s, i, f, c);
    fclose(stream);
}