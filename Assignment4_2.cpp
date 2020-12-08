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

	int min = arr[0];
	int count = 0;
	for (int i = 0; i < n; ++i){
		if (arr[i]<min && arr[i]>0){
			min = arr[i];
			count = 1;
		}
	}
	if (count==0){
		printf("Mang khong co so duong\n");
	}else{
		printf("So duong nho nhat cua mang la %d\n",min);
	}
}