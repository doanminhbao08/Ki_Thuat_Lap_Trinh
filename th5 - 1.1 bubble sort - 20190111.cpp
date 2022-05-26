#include<stdio.h>
#include<math.h>
#include<iostream>
using namespace std;
void doicho(int &a,int &b){
	int c;
	c = a;
	a = b;
	b = c;	
	}
int main(){
	
	int n;
	printf("Nhap so phan tu cua mang: ");
	scanf("%d",&n);
	int a[n];
	printf("Nhap cac phan tu cua mang:\n");
	for(int i=0;i<n;i++){
			printf("a[%d] = ",i+1); scanf("%d",&a[i]);
	}
	
	
	int sum = 1;
	while(sum != 0){
		sum = 0;
		for(int i=0;i<n-1;i++){
			if(a[i] > a[i+1]){
				doicho(a[i],a[i+1]);
				sum ++;
			}	
		}
	}
	
	
	printf("\nMang sau khi duoc sap xep:\n");
	for(int i=0;i<n;i++){
			printf("a[%d] = %d\n",i+1,a[i]);
	}
	
	return 0;
}

