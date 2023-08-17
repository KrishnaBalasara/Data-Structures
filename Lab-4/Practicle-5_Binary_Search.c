// Write a program to implement Binary Search.

#include<stdio.h>
int BinarySearch(int a[], int i, int j, int key) {
 while(i<=j) {
 int mid = (i+j)/2;
 if(a[mid]==key) {
 return mid;
 }
 if(key > a[mid]) {
 return BinarySearch(a, mid+1, j, key);
 }
 if(key < a[mid]) {
 return BinarySearch(a, i, mid-1, key);
 }
 }
 return -1;
}
void main() {
 int a[] = {2, 3, 4, 5, 6};
 int n = sizeof(a) / sizeof(a[0]);
 int key = 4;
 int result = BinarySearch(a, 0, n-1, key);
 printf("The Element is found at position: %d", result);
}

/* OUTPUT
The Element is found at position: 2 */
