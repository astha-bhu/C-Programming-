/*display fibonacci series using recursion*/
#include<stdio.h>
int fibo(int n);
int main(){
int n;
printf("enter number of terms: ");
scanf("%d",&n);
for(int i=1;i<=n;i++)
printf("%d\n",fibo(i));
return 0;
}
int fibo(int n){
if(n==1){
return 0;}
if(n==2){
return 1;}
int fiboNm1=fibo(n-1);
int fiboNm2=fibo(n-2);
int fiboN= fiboNm1+ fiboNm2;
return fiboN;
}

