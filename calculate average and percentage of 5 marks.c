/*calculate average and percentage of 5 numbers*/
#include<stdio.h>
#include<math.h>
int main(){
int a,b,c,d,e;
printf("enter marks in subject1 : ");
scanf("%d",&a);
printf("enter marks in subject2 : ");
scanf("%d",&b);
printf("enter marks in subject3 : ");
scanf("%d",&c);
printf("enter marks in subject4 : ");
scanf("%d",&d);
printf("enter marks in subject5 : ");
scanf("%d",&e);
int sum=a+b+c+d+e;
//average 
float avg,per;
avg=(sum)/5;
//percentage 
per=sum*100/500;
printf("average is:%f\n percentage is:%f\n",avg,per);

return 0;
}
