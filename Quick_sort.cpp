#include<stdio.h>
#include<math.h>
#include<iostream>
using namespace std;

void swap(int &a, int &b){
	int c = a;
	a = b;
	b = c;
}

int sort(int a[], int l, int r){
	// Chon neo la phan tu dung dau
	int pivot = r; 
	r = r - 1;
	int i = -1, L[20], j = -1, R[20];
	for(int k=l; k<=r; k++){
		if(a[k] <= a[pivot]){
			i++;
			L[i] = a[k];
		}
		else{
			j++;
			R[j] = a[k];
		}
	}
	for(int k=0; k<=i; k++){
		a[l+k] = L[k];
	}
	a[l+i+1] = a[pivot];
	for(int k=0; k<=j; k++){
		a[l+i+2+k] = R[k];
	}

	return l+i+1;	
}

void quick_sort(int a[], int l, int r){
	if(l < r){
		int pivot = sort(a, l, r);
		quick_sort(a, l, pivot-1);
		quick_sort(a, pivot+1, r);
	}
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
	for(int i=0;i<n;i++){
		cout << a[i] << " ";
	}
	
	quick_sort(a, 0, n-1);
	
	cout << "\nMang sau khi sap xep: \n";
	for(int i=0;i<n;i++){
		cout << a[i] << " ";
	}
	return 0;
}

