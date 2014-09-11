#include <stdio.h>
#include <math.h>

int main(void)
{
    int end=0;
    float num=0;
    int num_floor=0, num_round=0, num_ceil=0;
    do
    {
        scanf("%f",&num);
        num_floor=floor(num);
        num_round=round(num);
        num_ceil=ceil(num);
        printf(  "\n%d %d %d\n",num_floor,num_round,num_ceil );
        
    }while((end=getchar())!=EOF);
    printf("Done.\n");
    
}
