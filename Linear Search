/*Linear Search using function*/
#include<stdio.h>
#include<stdlib.h>
void linear_search(int a[],int n,int search){
int i,k=0;
for(int i=0;i<n;i++){
if(a[i]==search){
printf("number is found at position %d.\n",i+1);
k++;
break;
}
}
if(k==0)
printf("number is not found.\n");
}
int main(){
int a[20],n,search,i;
printf("enter a range:");
scanf("%d",&n);
printf("enter %d numbers:\n",n);
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
printf("enter a number you want to search:");
scanf("%d",&search);
linear_search(a,n,search);
    return 0;
}