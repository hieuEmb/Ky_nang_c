#include <stdio.h>

int a[100];
int n;
int i;

void nhapMang(int x[], int *n) {
    printf("Nhap vao so luong phan tu: ");
    scanf("%d", n);
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

int timKiem(int x[], int n, int tk) {
    for (i = 0; i < n; i++) {
        if (x[i] == tk) {
            return 1;
        }
    }
    return 0;
}

void thucHienTimKiem(int x[], int n) {
    int tk;
    printf("Nhap vao gia tri can tim: ");
    scanf("%d", &tk);
    int kq = timKiem(x, n, tk);
    if (kq == 1) {
        printf("\nTim thay!");
    } else {
        printf("\nKhong tim thay!");
    }
}

int main() {
    nhapMang(a, &n);
    xuatMang(a, n);
    printf("\n");
    thucHienTimKiem(a, n);

    return 0;
}

