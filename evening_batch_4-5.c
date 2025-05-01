// Explanation of c program
// diffrence between language and programming language 
// basic syntax of a c programming
// first program
// data type and variables
// operators
// decision making statments
// function
// array 

// loops 
// pointer 
// structure and union
// jumping statments 
// file handling



#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE *fp;
    char ch;

    // ----------- 1. w mode -----------

    printf("\n[1] w mode: Write Only (creates or overwrites)\n");
    fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error opening file in w mode!\n");
        exit(1);
    }
    fprintf(fp, "Name: Ram, Roll: 101\n");
    fprintf(fp, "Name: Shyam, Roll: 102\n");
    fprintf(fp, "Name: gopal, Roll: 103\n");
    fprintf(fp,"This is a static values");

    fclose(fp);
    printf("Data written using w mode.\n");

    printf("\n r mode: Read Only\n");

    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Error opening file in r mode!\n");
        exit(1);
    }
    printf("Reading using r mode:\n");
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }
    fclose(fp);

    printf("\n[3] a mode: Append Only\n");
    fp = fopen("students.txt", "a");
    if (fp == NULL) {
        printf("Error opening file in a mode!\n");
        exit(1);
    }
    fprintf(fp, "Name: Sita, Roll: 103\n");
    fprintf(fp, "Name: Gita, Roll: 104\n");
    fclose(fp);
    printf("Data appended using a mode.\n");

    printf("\n[4] w+ mode: Write + Read (overwrites)\n");
    fp = fopen("students.txt", "w+");
    if (fp == NULL) {
        printf("Error opening file in w+ mode!\n");
        exit(1);
    }
    fprintf(fp, "This is a new value \n");
    fprintf(fp, "Name: Rani, Roll: 202\n");
    rewind(fp); // Reset pointer to read
    printf("Reading using w+ mode:\n");
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }
    fclose(fp);

    printf("\n[5] a+ mode: Append + Read\n");
    fp = fopen("students.txt", "a+");
    if (fp == NULL) {
        printf("Error opening file in a+ mode!\n");
        exit(1);
    }
    fprintf(fp, "Name: Laxmi, Roll: 203\n");
    rewind(fp); // Reset pointer to read entire content
    printf("Reading using a+ mode:\n");
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }
    fclose(fp);

    printf("\n[6] r+ mode: Read + Write (no overwrite)\n");
    fp = fopen("students.txt", "r+");
    if (fp == NULL) {
        printf("Error opening file in r+ mode!\n");
        exit(1);
    }
    fseek(fp, 0, SEEK_SET);
    fprintf(fp, "Name: UpdatedRavi, Roll: 301\n");
    rewind(fp);
    printf("Reading using r+ mode:\n");
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }
    fclose(fp);

    return 0;
}
