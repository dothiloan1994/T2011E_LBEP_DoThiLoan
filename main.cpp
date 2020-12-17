#include<stdio.h>
#include"assign6f.h"

int main(){
	int n;
	printf("Nhap so phan tu cua mang: ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		printf("arr[%d] = ",i);
		scanf("%d",&arr[i]);
	}

	//tim x thuoc mang
	int x;
	printf("Nhap so can tim trong mang: ");
	scanf("%d",&x);
	if(soThuocMang(arr,n,x)){
		printf("So %d co trong mang\n",x);
	}else{
		printf("So %d khong co trong mang\n",x);
	}

	//In so le
	inSole(arr,n);

	//tim uoc chung lon nhat, boi chung nho nhat cua 2 so
	int a,b;
	printf("Nhap a = ");
	scanf("%d",&a);
	printf("Nhap b = ");
	scanf("%d",&b);

	printf("Uoc chung lon nhat 2 so la %d\n",timUocChungMax(a,b));
	printf("Boi chung nho nhat 2 so la %d",timBoiChungMin(a,b));
}