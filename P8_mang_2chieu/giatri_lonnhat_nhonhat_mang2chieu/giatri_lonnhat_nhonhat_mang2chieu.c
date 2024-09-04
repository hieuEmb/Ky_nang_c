#include "stdio.h"

int a[100][100];
int m, n;

void nhapMaTran(int x[100][100], int *m, int *n) {
    do {
        printf("Nhap vao so dong m va so cot n: ");
        scanf("%d %d", m, n);
    } while (*m <= 0 || *n <= 0);

    int i, j;
    for (i = 0; i < *m; i++) {
        for (j = 0; j < *n; j++) {
            printf("x[%d][%d] = ", i, j);
            scanf("%d", &x[i][j]);
        }
    }
}

void xuatMaTran(int x[100][100], int m, int n) {
    printf("\nMang:\n");
    int i, j;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d\t", x[i][j]);
        }
        printf("\n");
    }
}

int timMax(int x[100][100], int m, int n) {
    int max = x[0][0];
    int i, j;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            if (max < x[i][j]) {
                max = x[i][j];
            }
        }
    }
    return max;
}

int timMin(int x[100][100], int m, int n) {
    int min = x[0][0];
    int i, j;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            if (min > x[i][j]) {
                min = x[i][j];
            }
        }
    }
    return min;
}

int main() {
    nhapMaTran(a, &m, &n);
    xuatMaTran(a, m, n);
    printf("Min = %d\n", timMin(a, m, n));
    printf("Max = %d\n", timMax(a, m, n));

    return 0;
}

