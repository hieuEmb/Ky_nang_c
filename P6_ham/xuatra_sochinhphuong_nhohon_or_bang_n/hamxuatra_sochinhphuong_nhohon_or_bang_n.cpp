//#29
#include "stdio.h"
#include "math.h"

int kiemTraSoChinhPhuong(int x){
	int kc = (int)sqrt(x);
	if(pow(kc, 2)==x) 
		return 1;
	else 
		return 0;
}
int main(){
	int n;
	do{
		printf("Nhap n = ");
		scanf("%d", &n);
	}while(n<1);
	
	for(int i=2; i<=n; i++){
		//int kt = kiemTraSoNguyenTo(i);
		if(kiemTraSoChinhPhuong(i)){
			printf("%d ", i);
		}
	}		
}
