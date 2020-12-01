#include <stdio.h>
#include <math.h>

int main(){
	int a,b,c;

	do {
		printf("Nhap 3 canh tam giac \n");
		printf("a = ");
		scanf("%d",&a);

		printf("b = ");
		scanf("%d",&b);

		printf("c = ");
		scanf("%d",&c);
	}while(a>=b+c||b>=c+a||c>=a+b||a<=0||b<=0||c<=0);
	float p=(a+b+c)/2;
	printf("Chu vi = %f",p*2);
	printf("Dien tich = %f",sqrt(p*(p-a)*(p-b)*(p-c)));
}
