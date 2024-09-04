#include "stdio.h"

int a[100][100];
int m, n;
int i;
int j;

void nhapMaTran(int x[100][100], int *m, int *n) {
    do {
        printf("Nhap vao so dong m va so cot n: ");
        scanf("%d %d", m, n);
    } while (*m <= 0 || *n <= 0);

    for (i = 0; i < *m; i++) {
        for (j = 0; j < *n; j++) {
            printf("x[%d][%d]=", i, j);
            scanf("%d", &x[i][j]);
        }
    }
}

void xuatMaTran(int x[100][100], int m, int n) {
    printf("\nMa tran:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d\t", x[i][j]);
        }
        printf("\n");
    }
}

int timKiem(int x[100][100], int m, int n, int giaTriTimKiem) {
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            if (x[i][j] == giaTriTimKiem) {
                return 1;
            }
        }
    }
    return 0;
}

void thucHienTimKiem(int x[100][100], int m, int n) {
    int luachon = 0;
    do {
        int giaTriTimKiem;
        printf("\nNhap vao gia tri can tim: ");
        scanf("%d", &giaTriTimKiem);
        int kq = timKiem(x, m, n, giaTriTimKiem);
        if (kq) {
            printf("Tim thay gia tri can tim kiem trong ma tran!\n");
        } else {
            printf("Khong tim thay gia tri can tim kiem trong ma tran!\n");
        }

        printf("Nhap so bat ky de tiep tuc tim kiem, nhap vao so 0 de thoat: ");
        scanf("%d", &luachon);
    } while (luachon != 0);
}

int main() {
    nhapMaTran(a, &m, &n);
    xuatMaTran(a, m, n);
    thucHienTimKiem(a, m, n);

    return 0;
}

