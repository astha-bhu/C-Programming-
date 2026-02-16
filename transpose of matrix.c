/*Transpose matrix of order 3×3*/
#include<stdio.h>
int main(){
int matrix[3][3];
//taking input for matrix
printf("enter elements of matrix: \n");
for(int i=0;i<3;i++){
for(int j=0;j<3;j++){
scanf("%d",&matrix[i][j]);
}
}

//transpose of matrix 
printf("transpose of matrix is:\n");
for(int i=0;i<3;i++){
for(int j=0;j<3;j++){
printf("%d ",matrix[j][i]);
}
printf("\n");
}
return 0;
}