#include<stdio.h>

int main(){
	int n;
	printf("Nhap n = ");
	scanf("%d",&n);

	int sum=0;

	printf("Cac uoc cua n lan luot la\n");
	for(int i=1;i<=n;i++){
		if(n%i==0){
			printf("%d\n",i);
			sum=sum+i;
		}
	}
	printf("Tong cac uoc = %d\n",sum);
}