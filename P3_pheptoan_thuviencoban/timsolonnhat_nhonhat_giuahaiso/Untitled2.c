//Nhap v�o 2 so nguy�n a, b tu b�n ph�m th�ng qua cua so console. H�y xuat ra m�n h�nh gi� tri nho nhat v� gi� tri lon nhat giua hai so a v� b.
#include "stdio.h"
int main(){
	// Khai bao bien
	int a, b, min, max;
	
	// Nhap du lieu
	printf("Nhap vao a = ");
	scanf("%d", &a);
	printf("Nhap vao b = ");
	scanf("%d", &b);
	
	// Xu ly
	min = (a, b)?a:b;
	
	// Xuat du lieu
	printf("\n MAX = %d", max);
	printf("\n MIN = %d", min);	

}
