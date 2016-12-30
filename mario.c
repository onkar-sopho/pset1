#include <stdio.h>
#include <cs50.h>

int main(void)
{ 
    int h;
    
    do
    {   printf("height: ");
        h = GetInt();
    } while((h<0)||(h>23));
    
    for (int i=0 ; i<h ; i++)
    { 
      for (int j=h-1 ; j>i ; j--)
      {
          printf(" ");
      }
      
      for (int x = 0 ; x<i+2 ; x++)
      {
          printf("#");
      }
    printf("\n");  
    }
}
