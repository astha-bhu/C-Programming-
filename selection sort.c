/*Selection Sort using function*/
#include<stdio.h>
#include<stdlib.h>
void selection_sort(int a[],int n){
int p,s,min,index,temp;
for(p=0;p<(n-1);p++){
min=a[p];
index=p;
for(s=p+1;s<n;s++){
if(min>a[s]){
min=a[s];
index=s;
}
}
temp=a[p];
a[p]=a[index];
a[index]=temp;
}
printf("\nAfter Sorting:\n");
for(p=0;p<n;p++)
printf("%d\t",a[p]);
}
int main(){
int a[10],n,i;
printf("enter a range:");
scanf("%d",&n);
printf("enter %d numbers:\n",n);
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
printf("\nBefore Sorting:\n");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
selection_sort(a,n);
    return 0;
}