/*find reverse of a number*/
#include<stdio.h>
int main()
{ int n,r=0;
//taking input number
    printf("Enter number: ");
    scanf("%d",&n);
    /*reverse number*/
    while(n!=0){
    r=r*10+n%10;
    n=n/10;
    }
    printf("reverse of digits of number is: %d",r);
    return 0;
}