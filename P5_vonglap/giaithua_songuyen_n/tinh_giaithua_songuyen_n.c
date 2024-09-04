#include <stdio.h>

int main() {
    int n, giaithua;
    int i; // Declare loop variable outside the loop

    do {
        printf("Nhap vao n (n >= 0): ");
        scanf("%d", &n);
    } while (n < 0);

    giaithua = 1;

    for (i = 1; i <= n; i++) {
        giaithua *= i;
    }

    printf("Giai thua = %d\n", giaithua);

    return 0;
}


