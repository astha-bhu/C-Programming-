//check number is negative positive or zero 
#include<stdio.h>
#include<math.h>
int main(){
int a;
printf("enter number: ");
scanf("%d",&a);
if(a<0)
printf("negative\n");
else if(a>0)
printf("positive\n");
else
printf("zero\n");
return 0;
}
