/*sum of square of digits of a number */
#include<stdio.h>
#include<math.h>
int main(){
int n,sum=0,r;
printf("enter number: ");
scanf("%d",&n);
//squaring each digits
while(n != 0){
r = n % 10;
sum = r * r + sum;
n = n / 10;
}
printf("%d\n",sum);
return 0;
}
    