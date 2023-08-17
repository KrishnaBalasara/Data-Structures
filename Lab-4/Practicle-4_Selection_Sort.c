// Write a program to implement selection sort.

#include<stdio.h>
void selection_sort(int arr[])
{
 int n=5,temp, min;
 for(int i=0; i<n-1; i++)
 {
 min=i;
 for(int j=i+1; j<n; j++) {
 if(arr[min]>arr[j]) {
 min = j;
 }
 if(min != i)
 {
 temp = arr[i];
 arr[i] = arr[min];
 arr[min] = temp;
 }
 }
 }
 printf("-----------------\nSorted array is:\n-----------------\n");
 for(int i=0; i<n; i++) {
 printf("%d ", arr[i]);
 }
}
int main()
{
 int arr[] = {6, 5, 4, 3, 2};
 selection_sort(arr);
210470107008
PRACTICAL 4
Page | 7
}

/*OUTPUT
-----------------
Sorted array is:
-----------------
2 3 4 5 6 */
