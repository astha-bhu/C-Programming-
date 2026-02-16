/* find sum and average of array elements*/
#include<stdio.h>
#include<math.h>
void avg(int *arr);
int main(){
int arr[5];
for(int i=0;i<5;i++){
printf("enter %d th element: ",i+1);
scanf("%d",&arr[i]);
}
avg(arr);
return 0;
}
void avg(int *arr){
int sum=0;
for(int i=0;i<5;i++){
sum=(sum + arr[i] );
}
printf("sum of elements of array is %d\n",sum);
printf("avg of elements of array is %f\n",sum/5.0);
}