/*input and print student details using structure*/
#include<stdio.h>
struct student{
char name[10];
int age;
float cgpa;
};
int main(){
struct student s1;
printf("student name: ");
scanf("%s",s1.name);
printf("student's age: ");
scanf("%d",&s1.age);
printf("student's cgpa: ");
scanf("%f",&s1.cgpa);


printf("student's name is: %s\n",s1.name);
printf("student age: %d\n",s1.age);
printf("student cgpa: %f\n",s1.cgpa);

}
