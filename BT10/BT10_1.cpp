#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>


#include <stdio.h>
struct Student {
    char name[20];
    int age;
};
struct Student1 {
    char name[20];
    int age;
};

int main() {
    FILE *f1, *f2, *f3, *f4;
    f3 = fopen("text3.txt", "w");
    if (f3==NULL) {
        printf("Error opening file");
        return 1;
    }
    struct Student1 student1 = {"Anh", 13};
    fwrite(&student1, sizeof(struct Student1), 1, f3);
    fclose(f3);
    f3 = fopen("text3.txt", "w");
    if (f3==NULL) {
        printf("Error opening file");
        return 1;
    }
    fread(&student1, sizeof(struct Student1), 1, f3);
    printf("%s, %d\n", student1.name, student1.age);


    int n;
    char buffer[100];
    printf("Enter number of student \n");
    scanf("%d",&n);
    struct Student student [100];
    for (int i=0;i<n;i++) {
        printf("Enter name of student %d:\n",i+1);
        scanf("%s",&student[i].name);
        printf("Enter age of student %d:\n",i+1);
        scanf("%d",&student[i].age);
    }

    f1 = fopen("text1.txt", "w");
    if (f1==NULL) {
        printf("Error opening file");
        return 1;
    }
    for (int i=0;i<n;i++) {
        fprintf(f1,"%s %d \n",student[i].name,student[i].age);
    }
    fclose(f1);
    f1 = fopen("text1.txt", "r");
    if (f1==NULL) {
        printf("Error opening file");
        return 1;
    }
    printf("Danh sach sinh vien\n");
    while(fgets(buffer,sizeof(buffer), f1) != NULL) {
        printf("%s", buffer);
    }
    fclose(f1);


    int m;
    printf("Enter number of digit\n");\
    scanf("%d",&m);
    int digit[100];
    f2 = fopen("text2.txt", "w");
    if (f2==NULL) {
        printf("Error opening file");
        return 1;
    }
    printf("Nhap cac phan tu\n");
    for (int i=0;i<m;i++) {
        scanf("%d",&digit[i]);
    }
    fwrite(&m, sizeof(int), 1, f2);
    fwrite(digit, sizeof(int), m, f2);
    fclose(f2);
    f2 = fopen("text2.txt", "r");
    if (f2==NULL) {
        printf("Error opening file");
        return 1;
    }
    fread(&m, sizeof(int), 1, f2);
    fread(digit, sizeof(int), m, f2);
    printf("Mang:\n");
    for (int i=0;i<m;i++) {
        printf("%d\n", digit[i]);
    }
    fclose(f2);


    f4 = fopen("example.dat", "rb+");
    if (f4 == NULL) {
        f4 = fopen("example.dat", "wb+"); // Create the file
        if (f4 == NULL) {
            printf("Error: Cannot open file!\n");
            return 1;
        }
    }
    int value = 12345;
    fseek(f4, 20, SEEK_SET);
    fwrite(&value, sizeof(int), 1, f4);
    printf("Wrote %d at position 20.\n", value);
    int readValue;
    fseek(f4, 20, SEEK_SET);
    fread(&readValue, sizeof(int), 1, f4);
    printf("Read %d from position 20.\n", readValue);
    long position = ftell(f4);
    printf("Current file pointer position: %ld\n", position);
    fclose(f4);

    return 0;
}