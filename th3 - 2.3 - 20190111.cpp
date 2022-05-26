#include<math.h>
#include<stdio.h>
//Su dung con tro tinh tong cua day
int main(){
	int n,*p;
	printf("Nhap cac phan tu cua mang: ");
	scanf("%d",&n);
	int a[n]; 
	for(int i=0;i<n;i++){
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	p = &a[0]; 
	int sum = 0;
	for(int i=0;i<n;i++){
		sum = sum + *p;
		p = p + (&a[1]-&a[0]);

	}
	printf("Tong cua day la: %d",sum);
	
	return 0;
	}
	
