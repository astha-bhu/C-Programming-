/*Swaping two numbers using third variable*/
#include<stdio.h>
int main()
{
int a,b;
printf("enter a: ");
scanf("%d",&a);
printf("enter b: ");
scanf("%d",&b);
printf("a=%d b=%d\n",a,b);
//swaping numbers
printf("after swaping\n");
int t=a;
a=b;
b=t;
printf("a=%d b=%d\n",a,b);
    return 0;
}