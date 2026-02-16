/*sum of first n natural numbers */
#include<stdio.h>
int sumofnat(int x);//function prototype
int main(){
int n;
printf("enter number: ");
scanf("%d",&n);
sumofnat(n);
return 0;
}
int sumofnat(int x){
int sum=0;
for(int i=1;i<=x;i++){
sum=sum+i;
}
printf("sum of first %d natural number is: %d",x,sum);
}
