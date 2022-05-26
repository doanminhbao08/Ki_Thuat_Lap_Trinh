#include<stdio.h>
#include<math.h>
//Cong 2 so su dung con tro
int main(){
	int *c,*d,a,b;
	printf("Nhap 2 so can cong \n");
	printf("a = "); scanf("%d",&a);
	printf("b = "); scanf("%d",&b);
	c = &a; d = &b;
	printf("a + b = %d",*c + *d);	
	
	return 0;
	}
