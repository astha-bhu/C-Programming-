/* find largest and smallest Elements
 of an array*/
#include<stdio.h>
#include<math.h>
int largest(int *arr);
int smallest(int *arr);
int main(){
int arr[5];
for(int i=0;i<5;i++){
printf("enter %d th element: ",i+1);
scanf("%d",&arr[i]);
}
printf("smallest element :%d\n",smallest(arr));
printf("largest element:%d\n",largest(arr));
return 0;
}
int largest(int *arr){
int max=arr[0];
for(int i=0;i<5;i++){
if(arr[i]>=max)
max=arr[i];
}
return max;
}
int smallest(int *arr){
int min=arr[0];
for(int i=0;i<5;i++){
if(arr[i]<=min)
min=arr[i];}
return min;
}
         