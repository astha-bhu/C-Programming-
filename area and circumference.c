/*Area and circumference of a circle*/
#include<stdio.h>
#include<math.h>
int main(){
int r;
float area,cir;
printf("enter radius of circle: ");
scanf("%d",&r);
//formula
area = 3.14*r*r;
cir = 2*3.14*r;
printf("Area of circle is: %f\n",area);
printf("Circumference of circle is: %f\n",cir);
    return 0;
}