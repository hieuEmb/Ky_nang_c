#include <stdio.h>

int i;
float trungBinhCong(int x[], int n) {
    int tong = 0;
    int soLuongSoDuong = 0;
    
    for (i = 0; i < n; i++) {
        if (x[i] > 0) {
            tong += x[i];
            soLuongSoDuong++;
        }
    }
    
    return soLuongSoDuong > 0 ? (float)tong / soLuongSoDuong : -1;
}

int main() {
    int a[100];
    int n;

    do {
        printf("Nhap vao so luong phan tu (0-100): ");
        scanf("%d", &n);
    } while (n <= 0 || n > 100);

    for (i = 0; i < n; i++) {
        printf("Nhap vao phan tu thu %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    float tbcsd = trungBinhCong(a, n);

    if (tbcsd != -1) {
        printf("\nTrung binh cong so duong: %.2f", tbcsd);
    } else {
        printf("\nMang khong co so duong!");
    }
    return 0;
}

