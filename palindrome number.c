/*check wether a number is palindrome or not*/
#include<stdio.h>
#include<math.h>
int main(){
int n,x,k=0,r=0;
printf("enter number: ");
scanf("%d",&x);
n=x;
while(n != 0){
k = n % 10;
r=r*10+k;
n = n / 10;
}
printf("reverse of number is: %d\n",r);
if(x == r){
printf("palindrome number.\n");
}
else{
printf("not a palindrome number.\n");
}

return 0;
}
    