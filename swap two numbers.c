/*swaping to numbers*/
#include<stdio.h>
int swap(int x,int y);//function prototype 
int _swap(int *x,int *y);

int main(){
int a=4,b=3;
//call by value
swap(a,b);
printf("a is: %d & b is: %d\n",a,b);
//call by reference 
_swap(&a,&b);
printf("a is: %d & b is: %d\n",a,b);
}
int swap(int x,int y){
int t=x;
x=y;
y=t;
printf("a is: %d & b is: %d\n",x,y);
}
int _swap(int*x,int*y){
int t=*x;
*x=*y;
*y=t;
}