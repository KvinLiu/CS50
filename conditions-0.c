#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("Please give me an int: ");
    int n = GetInt();
    
    if (n >0)
    {
        printf("You picked a positive integar!\n");
    }
    else
    {
        printf("You picked a negative integar!\n");
    }
    
}
