/*bubble sort using functio*/
#include<stdio.h>
#include<stdlib.h>
void bubble_sort(int a[],int r){
int i,j,temp;
for(i=0;i<r;i++){
for(j=0;j<r-1;j++){
if(a[j]>a[j+1]){
temp=a[j+1];
a[j+1]=a[j];
a[j]=temp;
}
}
}
printf("\nAfter Sorting:\n");
for(i=0;i<r;i++){
printf("%d\t",a[i]);
}
}
int main()
{
int a[15],n,i;
printf("enter a range:");
scanf("%d",&n);
printf("enter %d numbers:\n",n);
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
printf("Before Sorting:\n");
for(i=0;i<n;i++){
printf("%d\t",a[i]);
}
bubble_sort(a,n);
    return 0;
}