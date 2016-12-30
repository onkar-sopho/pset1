#include <stdio.h>
#include <cs50.h>

int main(void)
{   
    int i;
    do
    {
     printf("minutes: ");
     i = GetInt();
    } while(i<0);
    printf("bottles: %d\n",(192*i)/16);
}
