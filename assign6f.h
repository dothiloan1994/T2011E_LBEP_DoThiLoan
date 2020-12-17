#include<stdio.h>

//Tìm 1 số có nằm trong mảng hay không
bool soThuocMang(int arr[], int n, int x){
	for(int i=0;i<n;i++){
		if(arr[i]==x){
			return true;
		}
	}
	return false;
}

//In ra cac so le trong mang
void inSole(int arr[], int n){
	for(int i=0;i<n;i++){
		if(arr[i]%2!=0){
			printf("%5d",arr[i]);
		}
	}
}

//Tim uoc chung lon nhat cua 2 so
int timUocChungMax(int a, int b){
	if(a>b){
		while(a>b){
			a=a-b;
		}
		return a;
	}else if(b>a){
		while(b>a){
			b=b-a;
		}
		return b;
	}else{
		return b;
	}
}

//Tim boi chung nho nhat cua 2 so
int timBoiChungMin(int a, int b){
	int uocChungMax=timUocChungMax(a,b);
	return a*b/uocChungMax;
}