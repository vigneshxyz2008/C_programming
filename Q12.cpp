#include <stdio.h>
int main() 
{
    int asciiValue;
    
    printf("Enter a number: ");
    scanf("%d" ,&asciiValue);
    
    printf("The ASCII %d is: %c\n", asciiValue);
    
    return 0;
}