/*swap two numbers without using third variable*/
#include<stdio.h>
int main(){
int a,b;
printf("enter a: ");
scanf("%d",&a);
printf("enter b: ");
scanf("%d",&b);
printf("before swap: a=%d b=%d\n",a,b);
//swaping
a=a+b;//sum of a&b
b=a-b;//sum-b=a
a=a-b;//sum-newb(olda)=b
printf("after swap: a=%d b=%d\n",a,b);
return 0;
}
