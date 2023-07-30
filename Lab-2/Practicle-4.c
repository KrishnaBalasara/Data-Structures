// Write a C Program to Swap Max and Min Value from array of 10 integer value.

#include<stdio.h>
int main()
{
   int arr[10], max=0, min=arr[0],temp;
   printf("Enter any 10 integer: \n");
   for(int i=0; i<10; i++) //input
   {
     scanf("%d",&arr[i]);
   }
  
   for(int i=0; i<10; i++) //check max value
   {
     if(arr[i]>max)
     {
       max=arr[i];
     }
   }
   for(int i=0; i<10; i++) //check min value
   {
     if(arr[i]<min)
     {
       min=arr[i];
     }
   }
   printf("\n------------------------------------------------------\n");
   printf("Before swapping maximum = %d\tminimum = %d\n", max, min);
   temp=max; //swapping
   max=min;
   min=temp;
   printf("\n------------------------------------------------------\n");
   printf("After swapping maximum = %d\tminimum = %d\n", max, min);
}

// OUTPUT
// Enter any 10 integer:
// 10 20 30 40 50 60 70 80 90 100
// ------------------------------------------------------
// Before swapping maximum = 100 minimum = 10
// ------------------------------------------------------
// After swapping maximum = 10 minimum = 100
