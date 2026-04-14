#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int a;
    printf("Enter a prime number:");
    scanf("%d",&a);
    if(a >= 10 && a <= 50) {
        printf(" Number between 10-50\n");
    }
    else {
        printf(" Number not between 10-50\n");
    }

    int c;
    int d;
    printf("Enter 2 number:");
    scanf("%d %d",&c,&d);
    printf("Dich trai: %d\n",c << d);
    printf("Dich phai: %d\n",c >> d);

    int a1;
    int a2;
    int a3;
    printf("Enter 3 numbers:");
    scanf("%d %d %d",&a1,&a2,&a3);
    if(a1 > a2 && a1 > a3) {
        printf(" This is largest number: %d\n", a1);
    }
    else if(a2 > a1 && a2 > a3) {
        printf(" This is largest number: %d\n", a2);
    }
    else {
        printf(" This is largest number: %d\n", a3);
    }

}