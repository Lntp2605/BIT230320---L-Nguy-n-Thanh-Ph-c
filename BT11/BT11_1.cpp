#include <stdio.h>
#include <math.h>
#include <string.h>

int sumSquare(int n) {
    if (n == 1)
        return 1;
    return n * n + sumSquare(n - 1);
}
struct Product {
    char name[20];
    int price;
};


int main() {
//Bai 1
    printf("Bai 1\n");
    float diem;

    printf("Nhap diem (0 - 10): ");
    scanf("%f", &diem);

    if (diem < 0 || diem > 10) {
        printf("Diem khong hop le!\n");
    }
    else if (diem >= 9) {
        printf("Xep loai: Xuat sac\n");
    }
    else if (diem >= 8) {
        printf("Xep loai: Gioi\n");
    }
    else if (diem >= 6.5) {
        printf("Xep loai: Kha\n");
    }
    else if (diem >= 5) {
        printf("Xep loai: Trung binh\n");
    }
    else {
        printf("Xep loai: Yeu\n");
    }



    printf("\n");
    printf("Bai 2\n");
//Bai 2
    for (int i = 2; i <= 9; i++) {
        printf("Bang cuu chuong %d:\n", i);
        for (int j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
    }



printf("\n");
    printf("Bai 3\n");
//Bai 3
    int n;
    printf("Nhap N: ");
    scanf("%d", &n);

    int sum = 0;
    int count = 0;
    int num = 1;

    while (count < n) {
        sum += num;
        num += 2;
        count++;
    }
    printf("Tong %d so le dau tien = %d\n", n, sum);



printf("\n");
    printf("Bai 4\n");
//Bai 4
    int x;
    printf("Nhap N:");
    scanf("%d", &x);

    if (x < 2) {
        printf("%d khong phai la so nguyen\n", x);
        return 0;
    }

    int isPrime = 1;

    for (int i = 2; i <= sqrt(x); i++) {
        if (x % i == 0) {
            isPrime = 0;
            break;
        }
    }

    if (isPrime)
        printf("%d la so nguyen to\n", x);
    else
        printf("%d khong phai la so nguyen to\n", x);



    printf("\n");
    printf("Bai 5\n");
//Bai 5
    int z;
    printf("Nhap n: ");
    scanf("%d", &z);

    int sum1 = 0;

    for (int i = 1; i <= z; i++) {
        sum1 += i * i;
    }

    printf("Tong S = %d\n", sum1);



printf("\n");
    printf("Bai 6\n");
//Bai 6
    int y;
    printf("Nhap n: ");
    scanf("%d", &y);

    if (y < 1) {
        printf("n khong hop le\n");
        return 0;
    }

    int result = sumSquare(y);
    printf("Tong S = %d\n", result);



printf("\n");
    printf("Bai 7\n");
//Bai7
    struct Product product1, product2;

    printf("Nhap ten san pham 1: ");
    scanf("%s", product1.name);
    printf("Nhap gia san pham 1: ");
    scanf("%f", &product1.price);

    printf("Nhap ten san pham 2: ");
    scanf("%s", product2.name);
    printf("Nhap gia san pham 2: ");
    scanf("%f", &product2.price);

    if (strcmp(product1.name, product2.name) == 0 && product1.price == product2.price) {
        printf("Hai san pham giong nhau\n");
    } else {
        printf("Hai san pham khac nhau\n");
    }

    return 0;
}
