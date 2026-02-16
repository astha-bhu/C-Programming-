/*Add two matrix of order 3×3*/
#include<stdio.h>
int main(){
int matrix1[3][3],matrix2[3][3],result[3][3];
//taking input for 1st matrix
printf("enter elements of matrix 1: \n");
for(int i=0;i<3;i++){
for(int j=0;j<3;j++){
scanf("%d",&matrix1[i][j]);
}
}
//taking input for 2nd matrix
printf("enter elements of 2nd matrix:\n");
for(int i=0;i<3;i++){
for(int j=0;j<3;j++){
scanf("%d",&matrix2[i][j]);
}
}
//sum of matrix 1 and 2
printf("sum of matrix 1 and matrix 2:\n");
for(int i=0;i<3;i++){
for(int j=0;j<3;j++){
result[i][j] = matrix1[i][j] + matrix2[i][j] ;
printf("%d ",result[i][j]);
}
printf("\n");
}
return 0;
}
