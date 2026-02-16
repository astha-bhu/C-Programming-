/*Factorial of a number*/
#include<stdio.h>
int main(){
int n;
printf("enter number: ");
scanf("%d",&n);
//function call
printfact(n);
return 0;
}
//Factorial function
int printfact(int x){
int fact=1;
if(x==1)
return 1;
if(x==0)
return 1;
for(int i=1;i<=x;i++){
fact=fact*i;}
printf("factorial of number is: %d\n",fact);
}



