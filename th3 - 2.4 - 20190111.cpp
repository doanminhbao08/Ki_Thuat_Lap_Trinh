//Tinh do dai chuo bang su dung con tro
#include<stdio.h>
#include<cstring>
 

int main() {
   char str[50];
   int length;
    
   printf("\nNhap chuoi bat ky: ");
   scanf("%s",&str);
    
   length = strlen(str);
   printf("\nDo dai chuoi %s la: %d", str, length);
  return(0);
}

