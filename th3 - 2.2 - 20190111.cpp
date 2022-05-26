#include<stdio.h>
#include<math.h>
//Trao doi 2 so su dung con tro
int main(){
	int *c,*d,*e,a,b;
	printf("Nhap 2 so can trao doi \n");
	printf("a = "); scanf("%d",&a);
	printf("b = "); scanf("%d",&b);
	c = &a; d = &b;
	e = c;
	c = d;
	d = e;
	printf("a = %d\nb = %d",*c,*d);	
	
	return 0;
	}
