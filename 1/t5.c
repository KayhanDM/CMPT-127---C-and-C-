#include <stdio.h>
#include <math.h>

int main(void)
{
    float num=0;
    int num_floor=0, num_round=0, num_ceil=0;
    int result=0;
    while((result=scanf("%f",&num))!=EOF)
     {
        
        num_floor=floor(num);
        num_round=round(num);
        num_ceil=ceil(num);
        printf(  "\n%d %d %d\n",num_floor,num_round,num_ceil );
        
     }
    printf("Done.\n");
    
}
