
//Do vecto la matrix 1 hang nen em se lam truong hop tong quat cho ma tran
#include<stdio.h>
#include<math.h>

int main(){
	//Tong hieu 2 ma tran
	int h,c;
	printf("Nhap so hang va so cot cua ma tran:\n"); 
	scanf("%d",&h);
	scanf("%d",&c);
	printf("Nhap phan tu ma tran a\n");
	int a[h][c];
	for(int i=0;i<h;i++){
		for(int j=0;j<c;j++){
			printf("a[%d][%d] = ",i,j); scanf("%d",&a[i][j]);
		}	
	}
	for(int i=0;i<h;i++){
		for(int j=0;j<c;j++){
			printf("%d   ",a[i][j]);
		}
		printf("\n");	
	}
	int b[h][c];
	printf("Nhap phan tu ma tran b\n");
	for(int i=0;i<h;i++){
		for(int j=0;j<c;j++){
			printf("b[%d][%d] = ",i,j); scanf("%d",&b[i][j]);
		}	
	}
	for(int i=0;i<h;i++){
		for(int j=0;j<c;j++){
			printf("%d   ",b[i][j]);
		}
		printf("\n");	
	}
	int t[h][c], hieu[h][c];
	for(int i=0;i<h;i++){
		for(int j=0;j<c;j++){
			t[i][j] = a[i][j]+b[i][j];
			hieu[i][j] = a[i][j]-b[i][j];
		}	
	}
	printf("Ma tran tong la:\n");
	for(int i=0;i<h;i++){
		for(int j=0;j<c;j++){
			printf("%d   ",t[i][j]);
		}
		printf("\n");	
	}
	printf("Ma tran hieu la:\n");
	for(int i=0;i<h;i++){
		for(int j=0;j<c;j++){
			printf("%d   ",hieu[i][j]);
		}
		printf("\n");	
	}
	return 0;
}
