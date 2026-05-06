#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
void bai3(float a, float b) {
    if (a == 0) {
        if (b == 0) {
            printf("Phuong trinh vo so nghiem\n");
        } else {
            printf("Phuong trinh vo nghiem\n");
        }
    } else {
        float x = -b / a;
        printf("Nghiem x = %.2f\n", x);
    }
}
int bai4(int arr[], int n) {
    int min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}
void bai5(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
//Bai 1
    printf("Bai 1\n");
    int a, b, n;
    printf("Nhap a, b, n: ");
    scanf("%d %d %d", &a, &b, &n);
    int sum = 0;
    for (int i = 1; i < n; i++) {
        if (i % a == 0 && i % b != 0) {
            sum += i;
        }
    }

    printf("Tong = %d\n", sum);


//Bai 2
printf("\n");
printf("Bai 2\n");

    for (int i = 10; i <= 99; i++) {
        int a1 = i / 10;
        int b1 = i % 10;
        if (a1 * b1 == 2 * (a1 + b1)) {
            printf("%d\n", i);
        }
    }


//Bai 3
printf("\n");
printf("Bai 3\n");

    float a2, b2;
    printf("Nhap a, b: ");
    scanf("%f %f", &a2, &b2);
    bai3(a2, b2);


//Bai 4
printf("\n");
printf("Bai 4\n");

    int x;
    printf("Nhap so phan tu: ");
    scanf("%d", &x);

    int arr[100];
    printf("Nhap cac phan tu:\n");
    for (int i = 0; i < x; i++) {
        scanf("%d", &arr[i]);
    }

    int result = bai4(arr, x);
    printf("Gia tri nho nhat: %d\n", result);


//Bai 5
printf("\n");
printf("Bai 5\n");
    int y;
    printf("Nhap so phan tu: ");
    scanf("%d", &y);

    int arr2[100];

    printf("Nhap cac phan tu:\n");
    for (int i = 0; i < y; i++) {
        scanf("%d", &arr2[i]);
    }

    bai5(arr2, y);

    printf("Mang sau khi sap xep giam dan:\n");
    printArray(arr2, y);


//Bai 6
printf("\n");
printf("Bai 6\n");
    float km, total = 0;
    printf("Nhap so km: ");
    scanf("%f", &km);
    if (km <= 1) {
        total = 15 * km;
    }
    else if (km <= 5) {
        total = 15 + (km - 1) * 13;
    }
    else {
        total = 15 + 4 * 13 + (km - 5) * 11;
    }
    if (km > 120) {
        total *= 0.9;
    }
    printf("Tien taxi: %.3f K\n", total);


//Bai 7
printf("\n");
printf("Bai 7\n");
    char c;
    printf("Nhap ky tu: ");
    scanf(" %c", &c);
    if (isdigit(c)) {
        printf("Ky tu so la: %c\n", c);
    }
    else if (isalpha(c)) {
        printf("Ky tu chu la: %c\n", c);
    }
    else {
        printf("Khong phai chu hay so\n");
    }
    return 0;
}
