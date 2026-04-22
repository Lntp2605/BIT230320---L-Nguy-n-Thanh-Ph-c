#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>


#include <stdio.h>

int main() {
    FILE *f1, *f2;
    char buffer[100];

    f1=fopen("test.txt", "w");
    if (f1==NULL) {
        printf("Ko tao dc file\n");
    }
    else {
        printf("Tao file thanh cong\n");
        fclose(f1);
    }

    f2=fopen("D:\\test1.txt", "w");
    if (f1==NULL) {
        printf("Ko tao dc file\n");
    }
    else {
        printf("Tao file thanh cong\n");
        fclose(f1);
    }
    f2=fopen("D:\\test1.txt", "a");
    fprintf(f2,"Hi");
    fclose(f2);
    f2=fopen("D:\\test1.txt", "r");
    if (f2==NULL) {
        printf("Ko mo dc file\n");
        return 1;
    }
    printf("Trong file:\n");
    while(fgets(buffer,sizeof(buffer), f2) != NULL) {
        printf("%s", buffer);
    }
    fclose(f2);


    return 0;
}