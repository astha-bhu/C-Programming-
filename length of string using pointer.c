/*find length of string using pointer*/
#include<stdio.h>
int lenstr(char *str[]);//function prototype
int main(){
char str[100];
printf("enter your string: \n");
scanf("%s",str);//taking input 
printf("%s\n",str);//print string
printf("length of string is: %d\n",lenstr(str));
return 0;
}
//definition of length string function
int lenstr(char *str[]){
for(int i=0;i<100;i++){
if(str[i]=='\0'){
return i+1;}
}
}
