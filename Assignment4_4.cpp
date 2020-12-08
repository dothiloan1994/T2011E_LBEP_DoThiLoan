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

	int sumMax = 0;
	for (int i = 0; i < n; ++i){
		if (arr[i]>0){
			int sum = 0;
			for (int j = i; j < n; ++j){
				if (arr[j]<=0){
					break;
				}
				sum = sum + arr[j];
			}
			if(sum>sumMax){
				sumMax = sum;
			}
		}
	}
	if(sumMax > 0){
		printf("Tong so duong lien tiep lon nhat la %d\n",sumMax);
	}else{
		printf("Khong co so duong\n");
	}
}