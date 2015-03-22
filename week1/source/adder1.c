#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("Plaese give me a Float: ");
    float x = GetFloat();
    
    printf("Plaese give me another Float: ");
    float y = GetFloat();
    
    printf("The sum of %f and %f is %f. \n", x, y, x + y);
}
