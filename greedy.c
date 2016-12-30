#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{   int c = 0 , d;
    float f;
    
    do
    {
        printf("O hai! How much change is owed?\n");
        f = GetFloat();
    
    } while(f<0);
 
 d = (int)round(f*100) ;
 
 if (d>=25)
 {
   c = c+(d/25);
   d = d%25; 
 }
 
 if (d>=10)
 {
     c = c+(d/10);
     d = d%10;
 }
 
if (d>=5)
 {
     c = c+(d/5);
     d = d%5;
 }
 
 if (d>=1)
 {
     c = c+d;
 }
 
 printf("%d\n",c);

return 0;
}
