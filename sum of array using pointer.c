/*find sum of array elements using pointer*/
#include<stdio.h>
#include<math.h>
int main(){
int arr[]={5,7,2,3,8,1};
int *ptr=arr;
int size=sizeof(arr);
int sum=0;
for(int i=0;i<size;i++){
sum += *(ptr);
ptr++;
}
printf("sum of elements of array is :%d\n",sum);
return 0;
}

