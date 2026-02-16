//print table of a number
#include<stdio.h>
/*function prototype*/
void printTable(int x);
int main(){
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    //function call
    printTable(n);
    return 0;
}
//function definition 
void printTable(int x){
for(int i=1;i<=10;i++){
//print
printf("%d\n",i*x);
}
}