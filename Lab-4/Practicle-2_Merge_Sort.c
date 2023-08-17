 // Write a program to implement Merge Sort.
#include <stdio.h>
void conquer(int arr[], int si, int mid, int ei)
{
 int merge[ei-si+1];
 int idx1 = si;
 int idx2 = mid+1;
 int x=0;
 while(idx1 <= mid && idx2 <= ei) {
 if(arr[idx1] < arr[idx2]) {
 merge[x++] = arr[idx1++];
 } else {
 merge[x++] = arr[idx2++];
 }
 }
 while(idx1 <= mid) {
 merge[x++] = arr[idx1++];
 }
 while(idx2 <= ei) {
 merge[x++] = arr[idx2++];
 }
 for(idx1=si,x=0; x<ei-si+1; x++,idx1++ ) {
 arr[idx1] = merge[x];
 }
}
void devide(int arr[], int si, int ei)
{
 if (si < ei) {
 int mid = si + (ei-si)/2;
 devide(arr, si, mid);
 devide(arr, mid + 1, ei);
 conquer(arr, si, mid, ei);
 }
}
int main()
{
 int n=5;
 int arr[] = {5,4,3,2,1};
 devide(arr, 0, n-1);
 for(int i=0; i<5; i++) {
 printf("%d ", arr[i]);
 }
}

/*OUTPUT
1 2 3 4 5*/
