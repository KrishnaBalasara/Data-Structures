/* Write a c program to store 5 values in appropriate data structure and
compute addition for the same, modify the size to store 10 values and
compute addition. */

#include <stdio.h>
#include <stdlib.h>
int main()
{
 int* ptr;
 int n1, n2, i;
 printf("Enter size: ");
 scanf("%d", &n1);
 printf("Enter number of elements: %d\n", n1);
 // Dynamically allocate memory using malloc()
 ptr = (int*) malloc(n1 * sizeof(int));
 // Check if the memory has been successfully
 // allocated by malloc or not
 if (ptr == NULL) {
 printf("Memory not allocated.\n");
 exit(0);
 }
 else {
 printf("Memory successfully allocated using calloc.\n");
 for (i = 0; i < n1; ++i) {
 ptr[i] = i + 1;
 }
 printf("The elements of the array are: ");
 for (i = 0; i < n1; ++i) {
 printf("%d, ", ptr[i]);
 }

 printf("\nEnter the new size: ");
 scanf("%d", &n2);
 ptr = realloc(ptr, n1 * sizeof(int));
 printf("Memory successfully re-allocated using realloc.\n");
 // Get the new elements of the array
 for (i = 5; i < n2; ++i) {
 ptr[i] = i + 1;
 }
 // Print the elements of the array
 printf("The elements of the array are: ");
 for (i = 0; i < n2; ++i) {
 printf("%d, ", ptr[i]);
 }
 free(ptr);
 }
return 0;
}

/* OUTPUT
Enter size: 5
Enter number of elements: 5
Memory successfully allocated using calloc.
The elements of the array are: 1, 2, 3, 4, 5,
Enter the new size: 10
Memory successfully re-allocated using realloc.
The elements of the array are: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, */
