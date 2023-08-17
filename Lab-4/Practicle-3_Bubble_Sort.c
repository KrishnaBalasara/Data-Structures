 // Write a program to implement Bubble Sort.

#include<stdio.h>
void bubblesort(int arr[]) {
 int temp, n=5;
 for(int i=0; i<n-1; i++) {
 for(int j=0; j<n-i-1; j++) {
 if(arr[j]>arr[j+1]) {
 temp = arr[j];
 arr[j] = arr[j+1];
 arr[j+1] = temp;
 }
 }
 }
 printf("-----------------\nSorted array is:\n-----------------\n");
 for(int i=0; i<5; i++) {
 printf(" %d ", arr[i]);
 }
}
int main() {
 int arr[] = {6, 5, 4, 3, 2};
 bubblesort(arr);
}

/*OUTPUT
-----------------
Sorted array is:
-----------------
2 3 4 5 6*/
