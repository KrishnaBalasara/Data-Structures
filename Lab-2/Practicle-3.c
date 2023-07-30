// Write a C Program to find largest value from array of 10 integers.

#include<stdio.h>
int main() {
   int arr[10];
   printf("Enter any 10 numbers: \n");
   for(int i=0; i<10; i++) {
      scanf("%d",&arr[i]);
   }
   for(int i=0; i<10; i++) {
     printf("%d\t",arr[i]);
   }
   int max=arr[0];
   for(int i=0; i<10; i++) {
     if(arr[i]>max){
     max=arr[i]; }
   }
   printf("\n---------------------------------------------------------------\n");
   printf("The Largest number from this array is : %d\n", max);
   printf("\n---------------------------------------------------------------\n");
   return 0;
}

// OUTPUT
// Enter any 10 numbers:
// 1 2 3 4 5 6 7 8 9 10
// 1 2 3 4 5 6 7 8 9 10
// ---------------------------------------------------------------
// The Largest number from this array is : 10
// ---------------------------------------------------------------
