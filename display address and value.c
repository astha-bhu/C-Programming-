/*display address and value of a 
variable using pointer*/
#include<stdio.h>
int main()
{
int n;
    printf("enter number: ");
    scanf("%d",&n);
    int *ptr=&n;
    /*ptr is a pointer which stire
     address of variable n*/
    printf("the address of variable is: %p\n",ptr);
    printf("the value of variable is: %d\n",*ptr);
    return 0;
}