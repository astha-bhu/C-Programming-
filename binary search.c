/*binary search using function*/
#include<stdio.h>
#include<stdlib.h>
void binary_search(int a[],int r,int search){
int m,l=0;
     while(l<=r){
          m=(l+r)/2;
          if(a[m]==search){
          printf("number is found at position %d.\n",m+1);
          break;
          }
          if(a[m]>search)
          r=m-1;
          if(a[m]<search)
          l=m+1;
          }
       if(l>r)
       printf("number not found.\n");   
}
int main(){
int a[15],n,search,i;
printf("enter a range:");
scanf("%d",&n);
printf("enter %d numbers:\n",n);
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
printf("enter a number you want to search:");
scanf("%d",&search);
binary_search(a,n,search);
return 0;
}