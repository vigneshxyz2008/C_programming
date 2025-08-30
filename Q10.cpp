#include <stdio.h>
int main() 
{
    int number;

    printf("Enter an octal number: ");
	scanf("%o", &number);

    printf("The decimal number is: %d\n",number);

    return 0;
}