/* reverse a string*/
#include<stdio.h>
int main(){
int n;
printf("enter length of your string: ");
scanf("%d",&n);
char ch[n];
for(int i=0;i<n;i++){
printf("enter %d th element of string: ",i+1);
scanf("%s",&ch[i]);
}
for(int i=n;i>=0;i--){
printf("%c",ch[i]);
}
return 0;
}
