/*find sum of digit of a number*/
#include<stdio.h>
int main()
{ int n,sum=0;
//taking input number
    printf("Enter number: ");
    scanf("%d",&n);
    while(n!=0){
    sum=sum+(n%10);//adding digits
    n=n/10;//removing added digits
    }
    printf("sum of digits of number is: %d",sum);
    return 0;
}