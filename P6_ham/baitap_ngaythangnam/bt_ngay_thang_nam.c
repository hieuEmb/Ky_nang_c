// Xin luu y: doan code da bo sung phan kiem tra ngay nhap co chinh xac hay khong?

#include "stdio.h"
int i;
int soNgayCuaThang(int thang, int nam){
	switch(thang){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			return 31;
		case 4:
		case 6:
		case 9:
		case 11:
			return 30;
		case 2:
			return ((nam % 400 ==0)||(nam%4==0 && nam %100 !=0))?29:28;
		default:
			return -1;			
	}
}

int ngayTrongNam(int ngay, int thang, int nam){
	int ntn = 0;
	for(i=1; i<thang; i++){
		ntn+=soNgayCuaThang(i, nam);
	}
	ntn+=ngay;
	return ntn;
}

void inNgayTruocDo(int ngay, int thang, int nam){
	if (ngay==1){
		if (thang==1){
			ngay=31;
			thang=12;
			nam--;
		}else{
			thang--;
			ngay=soNgayCuaThang(thang, nam);
		}
	}else{
		ngay--;
	}
	printf("\n Ngay truoc do: %d/%d/%d", ngay, thang, nam);
}

void inNgayKeDo(int ngay, int thang, int nam){
	int nct = soNgayCuaThang(thang, nam);
	if (ngay==nct){
		if(thang==12){
			ngay =1;
			thang =1;
			nam++;
		}else{
			ngay=1;
			thang++;
		}
	}else{
		ngay++;
	}
	printf("\n Ngay ke do: %d/%d/%d", ngay, thang, nam);
}

int kiemTraNgayNhap(int ngay, int thang, int nam){
	// Neu nhap vao ngay, thang, nam <1 => khong hop le
	if (ngay < 1 || thang <1 || nam < 1) return 0; // Neu nhap thang > 12 la khong hop le
	if(thang>12)
		return 0;	
		
	// Kiem tra ngay	
	int soNgay = soNgayCuaThang(thang, nam);
	
	// Neu nhap vao ngay > so ngay cua Thang => khong hop le
	if(ngay>soNgay)
		return 0;
		
	// Con lai la hop le
	return 1;
}

int main(){
	int ngay, thang, nam;
	do{
		
		printf("Nhap vao ngay thang nam: ");
		scanf("%d%d%d", &ngay, &thang, &nam);
		
	}while(!kiemTraNgayNhap(ngay, thang, nam));
	// Khi nao van con nhap sai thi yeu cau nhap lai ngay, thang, nam
	
	// cau a, tim ra so ngay trong thang
	printf("\n So ngay cua thang: %d", soNgayCuaThang(thang, nam));
	
	// cau b, tim ngay trong nam
	printf("\n Ngay trong nam: %d", ngayTrongNam(ngay, thang, nam));
	
	// cau c, tm ngay truoc do
	inNgayTruocDo(ngay, thang, nam);
	
	// cau d, tim ngay ke do
	inNgayKeDo(ngay, thang, nam);
	
}
