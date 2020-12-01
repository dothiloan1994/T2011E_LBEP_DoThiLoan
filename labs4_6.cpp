#include <stdio.h>

int main(){
	int n;
	printf("Nhap n = ");
	scanf("%d",&n);

	int fm=0;
	int fk=1;
	int fn;

	if(n==0){
		printf("fn = %d",fm);
	} else if(n==1){
		printf("fn = %d",fk);
	}else{
		for(int i=2;i<=n;i++){
			fn=fm+fk;
			fm=fk;
			fk=fn;
		}
		printf("fn = %d",fn);
	}
}