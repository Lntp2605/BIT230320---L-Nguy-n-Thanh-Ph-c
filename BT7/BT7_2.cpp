#include <cstring>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
void nhapMaTran(int a[][100], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
}
void inMaTran(int a[][100], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
void congMaTran(int A[][100], int B[][100], int C[][100], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

int main() {
    int matrix [2][3] = {{1,2,3},{4,5,6}};
    printf("Matrix\n");
    for(int i=0;i<2;i++) {
        for(int j=0;j<3;j++) {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }

    int m, n;
    printf("Nhap hang, cot:\n");
    scanf("%d %d", &m, &n);
    int A[100][100], B[100][100], C[100][100];
    printf("Nhap ma tran A:\n");
    nhapMaTran(A, m, n);
    printf("Nhap ma tran B:\n");
    nhapMaTran(B, m, n);
    congMaTran(A, B, C, m, n);
    printf("Ma tran tong:\n");
    inMaTran(C, m, n);

    char str[100];
    printf("Nhap string:\n");
    fgets(str, sizeof(str), stdin);
    scanf("%s", str);
    int length = strlen(str);
    printf("Length = %d\n", length);

    return 0;
}