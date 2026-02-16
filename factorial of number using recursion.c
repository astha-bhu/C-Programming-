/*factorial of a number by recursion*/
#include<stdio.h>
int fact(int n);
int main(){
int a;
printf("enter number: ");
scanf("%d",&a);
printf("factorial of %d is :%d",a,fact(a));
return 0;
}
//function definition 
int fact(int n){
if(n==1){
return 1;}
if(n==0){
return 1;}
int factNm1=fact(n-1);
int factN = factNm1 * n;
return factN;
}
