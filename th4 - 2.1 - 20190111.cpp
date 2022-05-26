#include<iostream>
#include<stdio.h>
using namespace std;
//Dumg con tro duyet mang so nguyen va in nguoc lai
int main(){
	int n;
	printf("Nhap so phan tu cua mang: ");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		printf("a[%d] = ",i+1);
		scanf("%d",&a[i]);
			
	}
	int *p;
	p = &a[n-1];
	//In ra mang bang con tro
	for(int i=0;i<n;i++){
		printf("\na[%d] = %d",n,*p);
		p = p - (&a[1]-&a[0]);	
	}
	
}
