#include <stdio.h>

int main(void)
{
    unsigned int x=0, y=0, z=0;
    scanf("%u",&x);
    scanf("%u",&y);
    scanf("%u",&z);

    
    for(int j=1;j<=y;j++)
      {
       if( (j==1) || (j==y))
          {
           for(int i=1;i<=x;i++)
                printf("#");
          
           printf("\n");
         }
       else
       {
           printf("#");
           if(x>1)
           {
             for(int i=2;i<x;i++)
                  printf(".");
             printf("#");
             printf("\n");
           }
           else
           printf("\n");
       }
      }
    
    return 0;
}
