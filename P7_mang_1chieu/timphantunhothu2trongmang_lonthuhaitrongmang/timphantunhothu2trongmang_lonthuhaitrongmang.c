#include <stdio.h>
#include <limits.h>

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

int timMinThuHai(int x[], int n) {
    int min = INT_MAX;
    int min_2 = INT_MAX;

    for (i = 0; i < n; i++) {
        if (x[i] < min) {
            min_2 = min;
            min = x[i];
        } else if (x[i] < min_2 && x[i] != min) {
            min_2 = x[i];
        }
    }

    return (min_2 == INT_MAX) ? min : min_2;
}

int timMaxThuHai(int x[], int n) {
    int max = INT_MIN;
    int max_2 = INT_MIN;

    for (i = 0; i < n; i++) {
        if (x[i] > max) {
            max_2 = max;
            max = x[i];
        } else if (x[i] > max_2 && x[i] != max) {
            max_2 = x[i];
        }
    }

    return (max_2 == INT_MIN) ? max : max_2;
}

int main() {
    nhapMang(a, &n);
    xuatMang(a, n);
    printf("\n");
    printf("Min_2 = %d", timMinThuHai(a, n));
    printf("\n");
    printf("Max_2 = %d", timMaxThuHai(a, n));

    return 0;
}

