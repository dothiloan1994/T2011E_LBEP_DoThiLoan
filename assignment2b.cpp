#include <stdio.h>

int main(){

	int a,b;

	printf("Nhap a = ");
	scanf("%d",&a);

	printf("Nhap b = ");
	scanf("%d",&b);

	if(a>=b){
		if(b!=0){
			printf("a/b = %f",(float)a/b);
		}else{
			printf("Khong the chia cho 0");
		}
	}else{
		printf("a*b = %d",a*b);
	}

}