#include "stdio.h"

int a[100][100];
int m, n;
int i;
int j;

// Function to calculate modulo with proper handling of negative values
int mod(int a, int b) {
    return (a % b + b) % b;
}

void nhapMaTran(int x[100][100], int *m, int *n){
    do {
        printf("Nhap vao m va n: ");
        scanf("%d%d", m, n);
    } while (*m <= 0 || *n <= 0);
    
    for (i = 0; i < *m; i++){
        for (j = 0; j < *n; j++){
            printf("x[%d][%d]=", i, j);
            scanf("%d", &x[i][j]);
        }
    }
}

void xuatMaTran(int x[100][100], int m, int n){
    printf("\nMang: \n");
    for (i = 0; i < m; i++){
        for (j = 0; j < n; j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}

void timMaTranChuyenVi(int x[100][100], int m, int n){
    int y[100][100];
    int k = n; // dong
    int l = m; // cot
    for (i = 0; i < k; i++){
        for (j = 0; j < l; j++){
            y[i][j] = x[j][i];
        }
    }
    printf("\nMa tran chuyen vi: \n");
    for (i = 0; i < k; i++){
        for (j = 0; j < l; j++){
            printf("%d\t", y[i][j]);
        }
        printf("\n");
    }
}

int main(){
    // Uncomment the following lines if you want to use the nhapMaTran and xuatMaTran functions
    // nhapMaTran(a, &m, &n);
    // xuatMaTran(a, m, n);
    
    // Uncomment the following line if you want to use the timMaTranChuyenVi function
    // timMaTranChuyenVi(a, m, n);
    
    // Example usage of the mod function
    printf("%d", mod(-1, 3));
    
    return 0;
}

