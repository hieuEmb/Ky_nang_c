//18
#include "stdio.h"
int main(){
	int thang, nam;
	printf("Nhap thang  = ");
	scanf("%d", &thang);
	printf("Nhap nam = ");
	scanf("%d", &nam);
	
	switch(thang){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("Co 31 ngay");
			break;
		
		case 4:
		case 6:
		case 9:
		case 11:
			printf("Co 30 ngay");
			break;
			
		case 2:
				if ((nam%400==0)|| (nam%4==0 && nam%100!=0)){
					printf("Co 29 ngay");
				}else{
					printf("Co 28 ngay");
				}
				break;
		default:
			printf("Nhap du lieu khong dung!");
	}
}
