#include <stdio.h>
#include <math.h>

int main(){
	int a,b,c;
	printf("Nhap 3 canh tam giac\n");
	printf("a = ");
	scanf("%d",&a);
	printf("b = ");
	scanf("%d",&b);
	printf("c = ");
	scanf("%d",&c);

	if(a>0&&b>0&&c>0&&a<b+c&&b<a+c&&c<a+b){
		float p = (float)(a+b+c)/2;
		printf("Dien tich tam giac la %f",sqrt(p*(p-a)*(p-b)*(p-c)));
	}else{
		printf("Day khong phai 3 canh cua tam giac");
	}
}