/*simple calculator using switch case*/
#include<stdio.h>
#include<math.h>
int main(){
char ope;
float num1,num2,r;
printf("enter num1: ");
scanf("%f",&num1);
printf("enter num2: ");
scanf("%f",&num2);
printf("enter operator:(+,-,*,/) :");
   scanf("%c",&ope);
switch(ope){
case'+':r=num1+num2;
printf("%f\n",r);
break;
case'-':r=num1-num2;
printf("%f\n",r);
break;
case'*':r=num1*num2;
printf("%f\n",r);
break;
case'/':if(num2 != 0){
r=num1/num2;
printf("%f\n",r);}
else printf("denominator can't be zero\n");
break;
default:printf("invalid operator\n");
}
return 0;
}
