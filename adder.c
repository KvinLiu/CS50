#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("Plaese give me a int: ");
    int x = GetInt();
    
    printf("Plaese give me another int: ");
    int y = GetInt();
    
    printf("The sum of %i and %i is %i. \n", x, y, x + y);
}
