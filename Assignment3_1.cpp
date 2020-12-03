#include<stdio.h>

int main(){
	int n;
	printf("Nhap n = ");
	scanf("%d",&n);

	if(n>=0){
		int i=0;
		while(i<n){
			printf("%d\n",i);
			i=i+2;
		}
	}
}