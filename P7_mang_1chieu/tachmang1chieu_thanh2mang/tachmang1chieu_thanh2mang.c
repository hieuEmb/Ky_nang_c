#include "stdio.h"
#include "stdlib.h"

int a[100], b[100], c[100];
size_t n, n1, n2;

void nhapMang(int x[100], size_t *n) {
    do {
        printf("Nhap vao so luong phan tu: ");
        scanf("%lu", n);
    } while (*n < 1);

    size_t i;
    for (i = 0; i < *n; i++) {
        printf("Nhap x[%lu]:", i);
        scanf("%d", &x[i]);
    }
}

void xuatMang(int x[100], size_t n) {
    printf("\n");
    printf("Gia tri cua mang la: ");
    size_t i;
    for (i = 0; i < n; i++) {
        printf("%d ", x[i]);
    }
}

void tachMang(int x[100], size_t n, int x1[100], size_t *n_1, int x2[100], size_t *n_2) {
    size_t i1 = 0, i2 = 0;
    *n_1 = 0;
    *n_2 = 0;

    size_t i;
    for (i = 0; i < n; i++) {
        if (x[i] % 2 == 0) {
            x1[i1] = x[i];
            i1++;
            (*n_1)++;
        } else {
            x2[i2] = x[i];
            i2++;
            (*n_2)++;
        }
    }
}

int main() {
    printf("-------\n");
    nhapMang(a, &n);
    xuatMang(a, n);

    tachMang(a, n, b, &n1, c, &n2);
    printf("\nMang chan:\n");
    xuatMang(b, n1);
    printf("\nMang le:\n");
    xuatMang(c, n2);

    return 0;
}

