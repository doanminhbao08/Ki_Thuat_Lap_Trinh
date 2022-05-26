
//Do vecto la matrix 1 hang nen em se lam truong hop tong quat cho ma tran
#include<stdio.h>
#include<math.h>

int main(){
	//Nhan 2 ma tran
	int h1,c1,c2;
	printf("Nhap so hang va so cot cua ma tran a:\n"); 
	scanf("%d",&h1);
	scanf("%d",&c1);
	int a[h1][c1];
	printf("Nhap so cot cua ma tran b:\n"); scanf("%d",&c2);
	printf("Nhap phan tu ma tran a\n");
	for(int i=0;i<h1;i++){
		for(int j=0;j<c1;j++){
			printf("a[%d][%d] = ",i,j); scanf("%d",&a[i][j]);
		}	
	}
	for(int i=0;i<h1;i++){
		for(int j=0;j<c1;j++){
			printf("%d   ",a[i][j]);
		}
		printf("\n");	
	}
	int b[c1][c2];
	printf("Nhap phan tu ma tran b\n");
	for(int i=0;i<c1;i++){
		for(int j=0;j<c2;j++){
			printf("b[%d][%d] = ",i,j); scanf("%d",&b[i][j]);
		}	
	}
	for(int i=0;i<c1;i++){
		for(int j=0;j<c2;j++){
			printf("%d   ",b[i][j]);
		}
		printf("\n");	
	}
	/*Tinh tich 2 ma tran
	Ma tran c co h1 hang va c2 cot
	*/
	int c[h1][c2];
	for(int i=0;i<h1;i++){
		for(int j=0;j<c2;j++){
			c[i][j]=0;
		}	
	}
	for(int i=0;i<h1;i++){
		for(int j=0;j<c2;j++){
			//cij = ai1.b1j + ai2.b2j + ... + aic1.bc1j
			for(int k=0;k<c1;k++){
				c[i][j] = c[i][j] + a[i][k]*b[k][j];
				
			}
		}
	}
	printf("Tich 2 ma tran a va b la:\n");
	for(int i=0;i<h1;i++){
		for(int j=0;j<c2;j++){
			printf("%d   ",c[i][j]);
		}
		printf("\n");	
	}
	return 0;
}
