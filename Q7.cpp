#include<stdio.h>
int main()
{
   int number;

   printf("enter an integer: ");
   scanf("%d", &number);
   
   printf("the number in hexadecimal is: %x\n",number);
   
   return 0;
}