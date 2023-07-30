// Write a C Program to delete a value in array of 10 integers from specific position.
#include<stdio.h>
int main()
{
   int arr[10], pos;
   printf("Enter any 10 numbers: \n"); //input
   for(int i=0; i<10; i++){
     scanf("%d", &arr[i]);
   }
   printf("Enter position: "); //position at which you want to delete element
   scanf("%d", &pos);
   int temp=arr[pos-1]; //here we make pos empty
   for(int i=pos; i<=9; i++) //shifting {
     arr[i-1]=arr[i];
   }
   printf("\n----------------------------------------------------------------\n");
   for(int i=0; i<9; i++){ //output
     printf("%d\t", arr[i]);
   }
}

// OUTPUT
// Enter any 10 numbers:
// 1 2 3 4 5 6 7 8 9 10
// Enter position: 4
// ----------------------------------------------------------------
// 1 2 3 5 6 7 8 9 10
