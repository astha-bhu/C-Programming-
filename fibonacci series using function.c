/*display fibonacci series using function*/
#include<stdio.h>
void fibo(int n);
int main(){
int n;
printf("enter number: ");
scanf("%d",&n);
fibo(n);
}
void fibo(int n){
int a=0,b=1,c;
for(int i=1;i<=n;i++){
printf("%d\n",c);
c=a+b;
a=b;
b=c;
}
}