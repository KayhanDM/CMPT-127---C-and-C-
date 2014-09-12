#include <stdio.h>
#include <math.h>

int main(void)
{
    unsigned int x=0, y=0, z=0;
    scanf("%u",&x);
    scanf("%u",&y);
    scanf("%u",&z);
    
    
    
    
    for(int j=z-1;j>=0;j--)
    {
        // find x-coordinates of pyramid edges on the j'th row
        // where x is the pyramid width, z is the pyramid height,
        int left = floor( j * (x/(2.0*z)) );
        int right = ceil( (x-1) + -j * (x/(2.0*z)) );
        
        if( j==(z-1))
        {
            for(int i=0;i<x;i++)
            {
                if((i>=left)&(i<=right))
                    printf("#");
                else
                    printf(" ");
                    
            }
            printf("\n");
        }
        else if( j==0)
        {
            for(int i=0;i<x;i++)
            {
                printf("#");
            }
            printf("\n");
        }

        else
        {
            
            for(int i=0;i<x;i++)
            {
                if((i==left)||(i==right))
                    printf("#");
                else if((i>=left)&(i<=right))
                    printf(".");
                else
                    printf(" ");
            }
            printf("\n");
        }
    }
  
    return 0;
}
