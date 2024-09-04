#include <stdio.h>

int a[100];
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

void xoaMangTaiViTri(int x[], int *n, int vi_tri) {
    int i;
    for (i = vi_tri; i < *n - 1; i++) {
        x[i] = x[i + 1];
    }
    (*n)--;
}

void xoaMangTheoGiaTri(int x[], int *n) {
    int gt;
    printf("\nNhap vao gia tri can xoa: ");
    scanf("%d", &gt);
    for (i = 0; i < *n; i++) {
        if (x[i] == gt) {
            xoaMangTaiViTri(x, n, i);
            i--; // Decrement i to recheck the current position after deletion
        }
    }
}

int main() {
    int n; // Declare n here
    nhapMang(a, &n);
    xuatMang(a, n);
    printf("\n");
    xoaMangTheoGiaTri(a, &n);
    printf("\n");
    xuatMang(a, n);

    return 0;
}

