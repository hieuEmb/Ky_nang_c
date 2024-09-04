#include "stdio.h"

int a[100][100];
int n;
int i;
int j;

void nhapMaTran(int x[100][100], int *n){
    do{
        printf("Nhap vao n: ");
        scanf("%d", n);
    } while(*n <= 0);

    for(i = 0; i < *n; i++){
        for(j = 0; j < *n; j++){
            printf("x[%d][%d]=", i, j);
            scanf("%d", &x[i][j]);
        }
    }
}

void xuatMaTran(int x[100][100], int n){
    printf("\nMang: \n");
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            printf("%d\t", x[i][j]);
        }
        printf("\n");
    }
}

int kiemTraDoiXungQuaDuongCheoChinh(int x[100][100], int n){
    for(i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            if(x[i][j] != x[j][i]){
                return 0;
            }
        }
    }
    return 1;
}

int kiemTraDoiXungQuaDuongCheoPhu(int x[100][100], int n){
    for(i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            if(x[i][j] != x[n-1-j][n-1-i]){
                return 0;
            }
        }
    }
    return 1;
}

int main(){
    nhapMaTran(a, &n);
    xuatMaTran(a, n);

    printf("%s", (kiemTraDoiXungQuaDuongCheoChinh(a, n) == 1 ? "Mang doi xung qua duong cheo chinh" : "Mang khong doi xung qua duong cheo chinh"));
    printf("\n");
    printf("%s", (kiemTraDoiXungQuaDuongCheoPhu(a, n) == 1 ? "Mang doi xung qua duong cheo phu" : "Mang khong doi xung qua duong cheo phu"));

    return 0;
}

