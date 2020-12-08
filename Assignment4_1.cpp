#include <stdio.h>

int main(){
	int n;
	printf("Nhap n = ");
	scanf("%d",&n);

	int arr[n];
	for (int i = 0; i < n; ++i){
		printf("Phan tu = ");
		scanf("%d",&arr[i]);
	}

	int rs = 0;
	for (int i = 0; i < n; ++i){
		if(arr[i]%2==1){
			rs = arr[i];
		}
	}
	if(rs==0){
		printf("Mang khong co so le\n");
	}else{
		printf("So le cuoi cung cua mang la %d\n", rs);
	}
}