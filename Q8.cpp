#include <stdio.h>
int main() 
{
    int number;

    printf("Enter an integer: ");
	scanf("%d", &number);

    printf("The number in octal is: %o\n", number);

    return 0;
}

