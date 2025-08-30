#include <stdio.h>
int main() 
{
    int number;

    printf("Enter a hexadecimal number: ");
    scanf("%x", &number);

    printf("The decimal number is: %d\n", number);

    return 0;
}
