#include <stdio.h>
int i;
int j;
void swap(int *a, int *b) {
    int tam = *a;
    *a = *b;
    *b = tam;
}

void sapXepTang(int x[], int n) {
    for (i = 0; i < n - 1; i++) {
        int vitrinhonhat = i;
        for (j = i + 1; j < n; j++) {
            if (x[j] < x[vitrinhonhat])
                vitrinhonhat = j;
        }
        swap(&x[i], &x[vitrinhonhat]);
    }
}

void sapXepGiam(int x[], int n) {
    for (i = 0; i < n - 1; i++) {
        int vitrilonnhat = i;
        for (j = i + 1; j < n; j++) {
            if (x[j] > x[vitrilonnhat])
                vitrilonnhat = j;
        }
        swap(&x[i], &x[vitrilonnhat]);
    }
}

void printMang(int x[], int n) {
    for (i = 0; i < n; i++) {
        printf("%d ", x[i]);
    }
}

int main() {
    int a[100], n;

    do {
        printf("Nhap vao so luong phan tu (0<n<=100): ");
        scanf("%d", &n);
    } while (n < 1 || n > 100);

    for (i = 0; i < n; i++) {
        printf("a[%d]=", i);
        scanf("%d", &a[i]);
    }

    printf("\n Mang tang dan: ");
    sapXepTang(a, n);
    printMang(a, n);

    printf("\n Mang giam dan: ");
    sapXepGiam(a, n);
    printMang(a, n);

    return 0;
}

