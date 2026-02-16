/*Add two numbers using pointer*/
#include<stdio.h>
int main()
{
int a,b,*ptr1,*ptr2;
    printf("enter number 1 & number 2: ");
    scanf("%d%d",&a,&b);
    ptr1=&a;//assign address of a to ptr1
    ptr2=&b;//assign address of b to ptr2
    printf("sum of %d & %d is :%d\n",a,b,(*ptr1+*ptr2));
    return 0;
}