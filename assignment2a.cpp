#include <stdio.h>

int main(){

	int a;

	printf("Nhap a = ");
	scanf("%d",&a);

	if(a>=2){
		if(a<=7){
			printf("Day la thu %d",a);
		}else{
			if(a==8){
				printf("Day la chu nhat");
			}else{
				printf("Day khong phai thu trong tuan");
			}
		}
	}else{
		printf("Day khong phai thu trong tuan");
	}
}