/* reverse a string using recursion*/
#include<stdio.h>
void reverse(char *a);
int main(){
char str[]="Hello";
printf("original string: %s\n",str);
printf("reverse of the string: ");
reverse(str);
return 0;
}
void reverse(char *a){
if(*a=='\0'){
return ;
}
reverse(a+1);
printf("%c",*a);
}