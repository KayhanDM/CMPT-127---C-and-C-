
int scrambled ( int a[ ] , int b[ ] , int len )
{  

   if(len==0)
   return 1;
   int pos=0, swap=0;
   // sort a
   for ( int i = 0 ; i < ( len - 1 ) ; i++ )
   {
      pos = i;
 
      for ( int j = i + 1 ; j < len ; j++ )
      {
         if ( a[ pos ] > a[ j ] )
            pos = j;
      }
      if ( pos != i )
      {
         swap = a [i];
         a[i] = a[pos];
         a[pos] = swap;
      }
   }
    
   //sort b
    for ( int i = 0 ; i < ( len - 1 ) ; i++ )
   {
      pos = i;
 
      for ( int j = i + 1 ; j < len ; j++ )
      {
         if ( b[ pos ] > b[ j ] )
            pos = j;
      }
      if ( pos != i )
      {
         swap = b [i];
         b[i] = b[pos];
         b[pos] = swap;
      }
   }
   // compare a and b
  for(int i=0;i<len;i++)
      {
       if(a[i]!=b[i])
           return 0;
      }
   return 1;
}


