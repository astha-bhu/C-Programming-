/*combination nCr=n!/((r!)(n-r)!)*/
#include<stdio.h>
int fact(int x);
int ncr(int n,int r);
int main(){
int n=7,r=3;
int c=ncr(n,r);
printf("Combination (nCr) of %d and %d is: %d\n",n,r,c);
}
int ncr(int n,int r){
return fact(n)/(fact(r)*fact(n-r));
}
int fact(int x){
int fact=1;
for(int i=1;i<=x;i++){
fact=fact*i;
}
return fact;
}