/*calculate power of a number
using function*/
#include<stdio.h>
int power(int x,int y);
int main(){
int b;
int e;
printf("enter base number:");
scanf("%d",&b);
printf("enter exponent: ");
scanf("%d",&e);
printf("%d^%d=%d\n",b,e,power(b,e));
return 0;
}
int power(int x,int y){
return pow(x,y);
}

