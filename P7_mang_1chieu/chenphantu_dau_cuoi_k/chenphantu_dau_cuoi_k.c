#include <stdio.h>

int a[100];
int n;
int i;

void nhapMang(int x[], int *n) {
    do {
        printf("Nhap vao so luong phan tu: ");
        scanf("%d", n);
    } while (*n < 1);

    for (i = 0; i < *n; i++) {
        printf("Nhap x[%d]: ", i);
        scanf("%d", &x[i]);
    }
}

void xuatMang(int x[], int n) {
    printf("Gia tri cua mang la: ");
    for (i = 0; i < n; i++) {
        printf("%d ", x[i]);
    }
}

void themVaoCuoiMang(int x[], int *n, int m) {
    if (*n == 100) {
        printf("Khong the them vao mang!");
        return;
    }

    x[*n] = m;
    (*n)++;
}

void themVaoDauMang(int x[], int *n, int m) {
    if (*n == 100) {
        printf("Khong the them vao mang!");
        return;
    }

    (*n)++;
    for (i = *n - 1; i > 0; i--) {
        x[i] = x[i - 1];
    }
    x[0] = m;
}

void themVaoViTriK(int x[], int *n, int m, int k) {
    if (*n == 100) {
        printf("Khong the them vao mang!");
        return;
    }

    (*n)++;
    for (i = *n - 1; i > k; i--) {
        x[i] = x[i - 1];
    }
    x[k] = m;
}

int main() {
    nhapMang(a, &n);
    xuatMang(a, n);
    printf("\n");

    themVaoCuoiMang(a, &n, 99);
    xuatMang(a, n);
    printf("\n");

    themVaoDauMang(a, &n, 88);
    xuatMang(a, n);
    printf("\n");

    themVaoViTriK(a, &n, 77, 3);
    xuatMang(a, n);

    return 0;
}

