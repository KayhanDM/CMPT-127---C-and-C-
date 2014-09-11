#include <stdio.h>

int main(void)
{
    float total=0,cur_val=0, min=+10000, max=-10000;
    int scan_stat=0, num=0;
    while((scan_stat=scanf("%f",&cur_val))!=EOF)
     {
        total+=cur_val;
        num++; 
        if(cur_val<min)
           min=cur_val;
        if(cur_val>max)
           max=cur_val;  
     }
   if(total==0)
     printf(  "0.00 0.00 0.00\n" );
      
   else 
      printf(  "%.2f %.2f %.2f\n", min, max, (total/num) );
    
    
}
