/*Perform Arithmetic operations using function*/
#include<stdio.h>
int add(int x, int y) {
return x+y;}
int substract(int x, int y) {
return x-y;}
int multiply(int x, int y) {
return x*y;}
int divide(int x, int y) {
return x/y;}
int modulus(int x, int y) {
return x%y;}

int main() {
int a,b;
printf("enter two operands: ");
scanf("%d%d", &a,&b);
printf("summation of %d and %d is: %d\n", a, b, add(a,b));
printf("substraction of %d and %d is: %d\n", a, b, substract(a,b));
printf("multiplication of %d and %d is %d\n", a, b, multiply(a,b));
printf("division of %d and %d is: %d\n", a, b, divide(a,b));
printf("modulus of %d and %d is: %d\n", a, b, modulus(a,b));
return 0;
}