#include <stdio.h>

int main(){
	int n;
	printf("Nhap n = ");
	scanf("%d",&n);

	int rs=1;
	for(;n>0;n--){
		rs=rs*n;
	}
	printf("n! = %d",rs);
}