/*find sum of first n natural numbers using recursion*/
#include<stdio.h>
int sum(int n);
int main(){
int n;
printf("enter number: ");
scanf("%d",&n);
printf("sum of first %d natural numbers is: %d\n",n,sum(n));
}
int sum(int n){
if(n==1){
return 1;}
int sumNm1=sum(n-1);
int sumN=sumNm1+n;
return sumN;
}
