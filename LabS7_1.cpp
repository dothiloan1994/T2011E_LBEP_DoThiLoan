#include <stdio.h>

int main(){

	int n;
	printf("Nhap n = ");
	scanf("%d",&n);

    int arr[n];
	for (int i = 0; i < n; ++i){
		printf("Nhap phan tu = ");
		scanf("%d",&arr[i]);
	}

	int x;
	printf("Nhap x = ");
	scanf("%d",&x);

	int tiemCanDuoi;
	int khoangCachMin = 0;
	
	for (int i = 0; i < n; ++i){
		if(x-arr[i]>0){
			khoangCachMin = x-arr[i];
			break;
		}
	}
	for (int i = 0; i < n; ++i){
		if(x-arr[i]>0&&x-arr[i]<khoangCachMin){
			khoangCachMin = x-arr[i];
		}
	}
	if(khoangCachMin==0){
		printf("Khong co so thoa man trong mang");
	}else{
		printf("So tiem can duoi cua x la %d\n",x-khoangCachMin);
	}
}