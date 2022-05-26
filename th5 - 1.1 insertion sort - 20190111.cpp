#include<stdio.h>
#include<math.h>
#include<iostream>
using namespace std;

int main(){
	int n;
	printf("Nhap so phan tu cua mang: ");
	scanf("%d",&n);
	int a[n];
	printf("Nhap cac phan tu cua mang:\n");
	for(int i=0;i<n;i++){
		printf("a[%d] = ",i+1); scanf("%d",&a[i]);
	}

	printf("\nMang sau khi duoc sap xep:\n");
	for(int i=0;i<n;i++){
		printf("a[%d] = %d\n",i+1,a[i]);
	}


	return 0;
}

