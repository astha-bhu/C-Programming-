/*swaping two numbers call by value*/
#include<stdio.h>
void swap(int a,int b);
int main(){
int x,y;
printf("enter num1 & num2: ");
scanf("%d %d",&x,&y);
printf("before swaping x=%d y=%d\n",x,y);
swap(x,y);
return 0;
}
void swap(int a,int b){
int temp=a;
a=b;
b=temp;
printf("after swaping x=%d & y=%d\n",a,b);
}