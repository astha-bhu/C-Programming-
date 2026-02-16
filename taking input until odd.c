/*keep taking number as input from the
 user until user enter an odd number*/
#include<stdio.h>
int main(){
int num;
do{
printf("enter number:");
scanf("%d",&num);
printf("num is: %d \n",num);
}while(num%2==0);
printf("you entered an odd number\nprogram ended.\n");
return 0;
}
