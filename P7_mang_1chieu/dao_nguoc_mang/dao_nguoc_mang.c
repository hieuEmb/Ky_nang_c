#include <stdio.h>

int a[100];
int n;
int i;
void nhapMang(int x[], int *n) {
    printf("Nhap vao so luong phan tu: ");
    scanf("%d", n);

    for (i = 0; i < *n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &x[i]);
    }
}

void daoNguocMang(int x[], int n) {
    int i, temp;  // Move the variable declaration outside the loop
    for (i = 0; i < n / 2; i++) {
        temp = x[i];
        x[i] = x[n - i - 1];
        x[n - i - 1] = temp;
    }
}

void xuatMang(int x[], int n) {
    for (i = 0; i < n; i++) {
        printf("%d ", x[i]);
    }
}

int main() {
    nhapMang(a, &n);

    printf("\nMang vua nhap la: ");
    xuatMang(a, n);

    daoNguocMang(a, n);

    printf("\nMang sau khi dao nguoc la: ");
    xuatMang(a, n);

    return 0;
}

