#include <stdio.h>

int main() {
    int a;
    float b;
    int c;

    printf("Nhap so nguyen: ");
    scanf("%d", &a);
    b = (float)a;
    c = (int)b;

    printf("So thuc sau khi ep tu int: %f\n", b);
    printf("So nguyen sau khi ep nguoc lai: %d\n", c);

    int d;
    int e;
    printf("Nhap so nguyen: ");
    scanf("%d", &d);
    scanf("%d", &e);
    printf("Sum = %d\n", d+e);
    printf("Min = %d\n", d-e);
    printf("Mul = %d\n", d*e);
    printf("Div = %d\n", d/e);
    printf("Mod = %d\n", d%e);

    float x;
    printf("Nhap so : ");
    scanf("%f", &x);
    printf("Up 5 : %f\n", x += 5);
    printf("Min 3 : %f\n", x -= 3);
    printf("Mul 2 : %f\n", x *= 2);
    printf("Div 4 : %f\n", x/=4);



    return 0;
}