#include <stdio.h>
int main() 
{
   char my_name[] = "Mark";
   int my_age = 26;
   char my_grade = 'A';
   float my_gpa = 4.60;
   printf("\n--- My Profile Info ---\n");
   printf("My name is: %s\n", my_name);
   printf("My age is: %d years old\n", my_age);
   printf("My grade is: %c\n", my_grade);
   printf("My GPA is: %.2f\n\n", my_gpa);
   return 0;
}