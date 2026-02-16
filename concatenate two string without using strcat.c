/*concatenation of two string 
without using strcat()*/
#include<stdio.h>
int main(){
char str1[50],str2[50];
printf("enter string 1: \n");
scanf("%s",str1);
//taking input of 1st string
printf("enter string 2: \n");
scanf("%s",str2);
//taking input of 2nd string
//concatenation 
int i=0;
while(str1[i] != '\0')
i++;
int j=0;
while(str2[j] != '\0'){
str1[i]=str2[j];
i++;
j++;
}
str1[i]='\0';
printf("concatenation of two string is :%s\n",str1);
return 0;
}
