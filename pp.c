#include<stdio.h>
 main()
{
   int x, y, z;           
   float avg;
   printf("Enter Three Numbers : \n");    
   scanf("%d %d %d",&x, &y, &z);     
 
   avg=(x+y+z)/3.0;                
   printf("Average is : %f", avg);    
return 0 ;
}