#include <stdio.h>

int main(){

	int n;
	printf("Nhap n = ");
	scanf("%d",&n);

    int arr[n];
	for (int i = 0; i < n; ++i){
		int x;
		printf("Nhap phan tu %d = ",i+1);
		scanf("%d",&x);
		for(int j = 0; j < i; ++j){
			while(x==arr[j]){
				printf("Nhap lai phan tu %d = ",i+1);
				scanf("%d",&x);
			}
		}
		arr[i] = x;
	}
}