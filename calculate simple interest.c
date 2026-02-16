/*calculate simple interest*/
#include<stdio.h>
#include<math.h>
int main(){
int p,t;
float r,si;
printf("enter principal amount: ");
scanf("%d",&p);
printf("\nenter year: ");
scanf("%d",&t);
printf("\nenter rate of interest: ");
scanf("%f",&r);
//formula of si
si=(p*r*t)/100;
printf("\nsimple interest is: %f\n",si);
return 0;
}