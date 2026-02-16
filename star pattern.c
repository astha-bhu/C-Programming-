/*print star pattern
     *   
    * *
   * * *
  * * * *
 * * * * * 
   */
   #include<stdio.h>
    int main(){
    int j,k;
    for(j=1;j<=5;j++){
    printf("\n");
    for(k=4;k>=j;k--){
    printf(" ");
    }for(k=1;k<=j;k++){
    printf("* ");
    }
    }
    return 0;
    }