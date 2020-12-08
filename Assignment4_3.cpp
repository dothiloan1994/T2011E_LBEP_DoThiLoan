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

	int countMax = 0;
	for (int i = 0; i < n; ++i){
		if (arr[i]>0){
			int count = 1;
			for (int j = i + 1; j < n; ++j){
				if (arr[j]<=0){
					break;
				}
				count++;
			}
			if(count > countMax){
				countMax = count;
			}
		}
	}
	if(countMax > 0){
		printf("So luong so duong lien tiep nhieu nhat la %d\n",countMax);
	}else{
		printf("Khong co so duong\n");
	}

}