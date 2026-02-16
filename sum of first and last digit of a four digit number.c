/*sum of first and last digit of a four digit number*/
#include<stdio.h>
#include<math.h>
int main(){
int n,sum=0,a;
printf("enter a four digit number: ");
scanf("%d",&n);
a=(n/1000);
/*update sum as 1st digit*/
sum+=a;
a=n%10;
/*update sum as sum of 1st & last digit*/
sum+=a;
printf("%d is sum of 1st and last digit.\n",sum);
return 0;
}
