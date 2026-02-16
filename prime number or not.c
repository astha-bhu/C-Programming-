/*To check if giver number is prime or not*/
#include<stdio.h>
int main(){
int n,r;
printf("enter number(greater than 1): ");
scanf("%d",&n);
for(int i=2;i<n;i++){
r=n%i;
if(r==0){
printf("not a prime number\n");
break;}
}
if(r!=0)
printf("prime number\n");
return 0;
}
