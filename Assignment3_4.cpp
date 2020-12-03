#include<stdio.h>

int main(){
	int a,b;
	printf("Nhap a = ");
	scanf("%d",&a);

	printf("Nhap b = ");
	scanf("%d",&b);

	int tich=a*b;
	int rs;
	if(a>b){
		while(a>b){
			a=a-b;
			rs=a;
		}
	}else if(b>a){
		while(b>a){
			b=b-a;
			rs=b;
		}
	}else{
		rs=a;
	}
	printf("Boi chung nho nhat cua 2 so la %d\n",tich/rs);
}
