// Write a C Program to implement searching on ordered array of 10 integer value.

#include<stdio.h>
int main()
{
 int arr[10], x, count=0;
 printf("Enter any 10 numbers: \n");
 for(int i=0; i<10; i++) {
 scanf("%d",&arr[i]);
 }
 printf("Enter number that you want to search: \n");
 scanf("%d", &x);
 for(int i=0; i<10; i++)
 {
 if(arr[i]==x) {
 printf("--------------------------\n");
 printf("The number is at index: %d\n", i);
 }
 }
}

// OUTPUT
// Enter any 10 numbers:
// 1 2 3 4 5 6 7 8 9 10
// Enter number that you want to search:
// 5
// --------------------------
// The number is at index: 4 
