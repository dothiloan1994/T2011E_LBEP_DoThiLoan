#include<stdio.h>

int main(){
	int a,b;
	printf("Nhap a = ");
	scanf("%d",&a);

	printf("Nhap b = ");
	scanf("%d",&b);

	int rs=1;
	for(int i=1;i<=a;i++){
		if(a%i==0){
			if(b%i==0){
				rs=i;
			}
		}
	}
	printf("Uoc chung lon nhat cua 2 so la %d\n",rs);
}
