/*finding roots of quadratic equation*/
#include<stdio.h>
#include<math.h>
int main(){
float a,b,c,r,p;
//ax^2+bx+c
printf("enter a: ");
scanf("%f",&a);
printf("enter b: ");
scanf("%d",&b);
printf("enter c: ");
scanf("%d",&c);
//shri dharacharya formula of roots 

if((b*b-4*a*c) < 0)
{
printf("imaginary roots\n");}
else{
printf("real roots\n");
}
r=(-b+sqrt(b*b-4*a*c))/2*a;
p=(-b-sqrt(b*b-4*a*c))/2*a;
printf("first root of equation is: %f\n",r);
printf("second root of equation is: %f\n",p);
return 0;
}
    