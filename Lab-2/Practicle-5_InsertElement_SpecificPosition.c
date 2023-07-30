// Write a C Program to insert a value in array of 10 integers at specific position.

#include<stdio.h>
int main()
  {
   int arr[11], value, pos;
   printf("Enter any 10 numbers: \n"); //input 10 number
   for(int i=0; i<10; i++)
   {
     scanf("%d", &arr[i]);
   }
   printf("-----------------------------------------------\n");
   printf("Enter position:\t"); //position at which you want to add number
   scanf("%d", &pos);
   printf("Enter value:\t"); //number that you want to add
   scanf("%d", &value);
   for(int i=10; i>=pos; i--) //shifting to next side
   {
     arr[i]=arr[i-1];
   }
   arr[pos-1]=value;
   printf("-----------------------------------------------\n");
   printf("-----------------------------------------------\n");
   for(int i=0; i<11; i++) //output {
     printf("%d\t",arr[i]);
   }
}

// OUTPUT
// Enter any 10 numbers:
// 1 2 3 4 5 6 7 8 9 10
// -----------------------------------------------
// Enter position: 3
// Enter value: 90
// -----------------------------------------------
// -----------------------------------------------
// 1 2 90 3 4 5 6 7 8 9 10
