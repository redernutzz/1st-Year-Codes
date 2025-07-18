#include <stdio.h>

int main() {
    FILE *fp;
    char str[] = "Hello, World!";

    fp = fopen("example.txt", "w");
    if (fp == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    if (fputs(str, fp) == EOF) {
        printf("Error writing to file\n");
        return 1;
    }

    fclose(fp);
    return 0;
}
