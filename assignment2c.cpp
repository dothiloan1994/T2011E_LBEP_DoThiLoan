#include <stdio.h>

int main(){

	int a,b;
	printf("Nhap a = ");
	scanf("%d",&a);

	printf("Nhap b = ");
	scanf("%d",&b);

	int ngayThang = 1;

	if(b>0){
		if(a==1||a==3||a==5||a==7||a==8||a==10||a==12){
			if(b>31){
				ngayThang = 0;
			}else{
				ngayThang = 1;
			}
		}else{
			if(a==4||a==6||a==9||a==11){
				if(b>30){
					ngayThang = 0;
				}else{
					ngayThang = 1;
				}
			}else{
				if(a==2){
					if(b>28){
						ngayThang = 0;
					}else{
						ngayThang = 1;
					}
				}else{
					ngayThang = 0;
				}
			}
		}
	}else{
		ngayThang = 0;
	}

	if(ngayThang == 1){
		int i = 1;
		int tongNgay = b;
		while(a-i>0){
			if(a-i!=2){
				if((a-i)%2==0){
					tongNgay = tongNgay + 30;
				}else{
					tongNgay = tongNgay + 31;
				}
			}else{
				tongNgay = tongNgay + 28;
			}
			i = i + 1;
		}
		printf("Ngay trong nam = %d \n",tongNgay);
		printf("Thu trong tuan = %d \n", tongNgay%7 + 1);
	}else{
		printf("Khong phai ngay ");
	}
}
