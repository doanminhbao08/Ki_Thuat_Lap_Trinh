#include<stdio.h>
#include<math.h>
int main(){
	int n;
	printf("Nhap so phan tu cua mang: "); scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		printf("a[%d] = ",i); scanf("%d",&a[i]);
	}
	int min = a[0], max = a[0];
	for(int i=0;i<n;i++){
		if(a[i] > max ){
			max = a[i];
		}
		if(a[i] < min ){
			min = a[i];
		}
	}
	printf("min = %d va max = %d\n",min,max);
	int f,m=0;
	printf("Nhap phan tu can tim: "); scanf("%d",&f);
	for(int i=0;i<n;i++){
		if(a[i]==m){
			m = m + 1;
		}
	}
	
	if(m==0) printf("Khong co phan tu tim kiem trong mang");
	else printf("Co phan tu tim kiem trong mang");
	return 0;
	}
