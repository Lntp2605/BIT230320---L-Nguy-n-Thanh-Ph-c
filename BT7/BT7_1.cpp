#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int sumArray(int a[], int n) {
    if (n == 0) {
        return 0;
    }
    else {
        return a[n-1] + sumArray(a, n-1);
    }
}
int maxIndex(int b[], int m) {
    int max = b[0];
    int index = 0;
    for (int i = 1; i < m; i++) {
        if (b[i] > max) {
            max = b[i];
            index = i;
        }
    }
    return index;
}
int timKiem(int c[], int x,int y) {
    for (int i = 0; i < x; i++) {
        if (c[i] == y) {
            return i;
        }
    }
    return -1;
}

int main() {
    int n;
    printf("Enter number of digit:\n");
    scanf("%d", &n);

    int a[n];
    printf("Enter array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Sum = %d\n", sumArray(a, n));

    int m;
    printf("Enter number of digit:\n");
    scanf("%d", &m);
    int b[m];
    printf("Enter array:\n", m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &b[i]);
    }
    int index = maxIndex(b, m);
    printf("Max = %d\n", b[index]);
    printf("Position:%d\n", index + 1);

    int numbers[5] = {1, 2, 3, 4, 5};
    int n1 = 5;
    for (int i = 0; i < n1/2; i++) {
        int temp = numbers[i];
        numbers[i] = numbers[n1 - i - 1];
        numbers[n1 - i - 1] = temp;
    }
    printf("Reversed Array:\n");
    for (int i = 0; i < n1; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    int z;
    printf("Enter number of digit:\n");
    scanf("%d", &z);
    int a1[z];
    printf("Enter array:\n", z);
    for (int i = 0; i < z; i++) {
        scanf("%d", &a1[i]);
    }
    int x;
    printf("Enter number:\n");
    scanf("%d", &x);
    int foundNumber = timKiem(a1, z, x);
    if (foundNumber != -1) {
        printf("Found in %d position\n", foundNumber);
    }
    else {
        printf("Not Found\n");
    }



    return 0;
}


// int main() {
//     int hang, cot;
//     printf("Nhap so hang: ");
//     scanf("%d", &hang);
//     printf("Nhap so cot: ");
//     scanf("%d", &cot);
//     int matran[hang][cot];
//     int chuyenvi[cot][hang];
//     printf("Nhap cac phan tu:\n");
//     for (int i = 0; i < hang; i++) {
//         for (int j = 0; j < cot; j++) {
//             printf("a[%d][%d] = ", i, j);
//             scanf("%d", &matran[i][j]);
//         }
//     }
//     for (int i = 0; i < hang; i++) {
//         for (int j = 0; j < cot; j++) {
//             chuyenvi[j][i] = matran[i][j];
//         }
//     }
//     printf("\nMa tran goc (%d x %d):\n", hang, cot);
//     for (int i = 0; i < hang; i++) {
//         for (int j = 0; j < cot; j++) {
//             printf("%4d", matran[i][j]);
//         }
//         printf("\n");
//     }
//     printf("\nMa tran chuyen vi (%d x %d):\n", cot, hang);
//     for (int i = 0; i < cot; i++) {
//         for (int j = 0; j < hang; j++) {
//             printf("%4d", chuyenvi[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }