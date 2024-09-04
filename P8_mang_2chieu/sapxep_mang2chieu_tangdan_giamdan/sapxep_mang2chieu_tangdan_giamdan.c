#include "stdio.h"

int a[100][100];
int m, n;
int i;
int j;

void nhapMaTran(int x[100][100], int *m, int *n){
    do{
        printf("Nhap vao m va n: ");
        scanf("%d%d", m, n);
    } while(*m <= 0 || *n <= 0);

    for(i = 0; i < *m; i++){
        for(j = 0; j < *n; j++){
            printf("x[%d][%d]=", i, j);
            scanf("%d", &x[i][j]);
        }
    }
}

void xuatMaTran(int x[100][100], int m, int n){
    printf("\nMang: \n");
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            printf("%d\t", x[i][j]);
        }
        printf("\n");
    }
}

void sapXepTang(int x[100][100], int m, int n){
    int k = m * n;
    for(i = 0; i < k - 1; i++){
        for(j = i + 1; j < k; j++){ 
            if(x[i / n][i % n] > x[j / n][j % n]){
                int temp = x[i / n][i % n];
                x[i / n][i % n] = x[j / n][j % n];
                x[j / n][j % n] = temp;
            }
        }
    }
}

void sapXepGiam(int x[100][100], int m, int n){
    int k = m * n;
    for(i = 0; i < k - 1; i++){
        for(j = i + 1; j < k; j++){
            if(x[i / n][i % n] < x[j / n][j % n]){
                int temp = x[i / n][i % n];
                x[i / n][i % n] = x[j / n][j % n];
                x[j / n][j % n] = temp;
            }
        }
    }
}

int main(){
    nhapMaTran(a, &m, &n);
    xuatMaTran(a, m, n);
    sapXepGiam(a, m, n);
    printf("\n Mang da sap xep giam la: \n");
    xuatMaTran(a, m, n);
    sapXepTang(a, m, n);
    printf("\n Mang da sap xep tang la: \n");
    xuatMaTran(a, m, n);

    return 0;
}

