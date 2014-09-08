#include <stdio.h>
#include <math.h>


int main(void)
{
   float num=0;
   int num_floor=0, num_round=0, num_ceil=0;
   //Fetch the number
   scanf("%f",&num);
   //Calculating the floor, rounf and ceil
   num_floor=floor(num);
   num_round=round(num);
   num_ceil=ceil(num);
   //Printing the results
   printf(  "%d %d %d\n",num_floor,num_round,num_ceil );
   return 0;
}
