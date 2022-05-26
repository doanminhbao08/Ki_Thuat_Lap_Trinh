#include<stdio.h>
#include<math.h>
int main(){
	int n;
	printf("Nhap so phan tu cua mang: "); scanf("%d",&n);
	int a[n],b[n];
	for(int i=0;i<n;i++){
		printf("a[%d] = ",i); scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		b[i] = 0;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(a[i] == a[j]){
				b[i]++; 
			}
		}
	
	}

	int max = b[0],index =0;
	for(int i=0;i<n;i++){
		if(max < b[i]){
			max = b[i];
			index = i;
		}
	}
	printf("Phan tu xuat hien nhieu nhat la: %d",a[index]);
}
