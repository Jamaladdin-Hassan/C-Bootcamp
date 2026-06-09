#include <stdio.h>
int main() 
{
int age;
printf("\nPlease enter your age: ");
scanf("%d", &age);
printf("\nExcellent!\n Next year you will be\n %d years old.\n", age + 1);
return 0;
}