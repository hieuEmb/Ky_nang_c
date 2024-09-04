#include "stdio.h"

void swap_thamtri(int a, int b) {
    int tam = a;
    a = b;
    b = tam;
}

void swap_thamchieu(int *a, int *b) {
    int tam = *a;
    *a = *b;
    *b = tam;
}

int main() {
    int a, b;
    printf("Nhap vao 2 so a, b: ");
    scanf("%d%d", &a, &b);

    printf("\nGia tri ban dau: a=%d va b=%d", a, b);

    // S? d?ng swap_thamtri v?i tham tr?
    swap_thamtri(a, b);
    printf("\nHoan doi - truyen tham tri: a=%d va b=%d", a, b);

    // S? d?ng swap_thamchieu v?i tham chi?u
    swap_thamchieu(&a, &b);
    printf("\nHoan doi - truyen tham chieu: a=%d va b=%d", a, b);

    return 0;
}

