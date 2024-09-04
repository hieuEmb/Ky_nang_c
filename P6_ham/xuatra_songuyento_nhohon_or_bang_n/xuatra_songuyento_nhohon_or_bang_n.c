//#28
#include "stdio.h"
#include "math.h"
int j;
int i;
int kiemTraSoNguyenTo(int x){
	if(x<=1) return 0;
	for(j=2; j<=sqrt(x); j++){
		if (x%j==0) return 0;
	}
	return 1;
}
int main(){
	int n;
	do{
		printf("Nhap n = ");
		scanf("%d", &n);
	}while(n<1);
	
	for(i=2; i<=n; i++){
		//int kt = kiemTraSoNguyenTo(i);
		if(kiemTraSoNguyenTo(i)){
			printf("%d ", i);
		}
	}		
}

