#include<stdio.h>
#include<math.h>
int main(){
	int n;
	printf("Nhap so phan tu cua mang sap xep theo thu tu tang dan: "); scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		printf("a[%d] = ",i); scanf("%d",&a[i]);
	}
	int f;
	printf("Nhap phan tu can tim: "); scanf("%d",&f);
	int o=0,b=n-1,c = (o+b)/2;
	while(f!=a[c]){
		if(f > a[c]){
			o=c;
		}
		else{
			o=c;
		}
		c = (o+b)/2;
	}
	printf("Phan tu can tim o vi tri thu %d",c+1);
	return 0;
}
