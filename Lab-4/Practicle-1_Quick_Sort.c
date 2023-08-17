 // Write a program to implement Quick Sort.
#include<stdio.h>
int partition(int arr[], int lb, int ub)
 {
 int pivot = arr[ub];
 int i = (lb - 1);
 for (int j = lb; j < ub; j++) {
 if (arr[j] < pivot) {
 i++;
 int temp = arr[i];
 arr[i] = arr[j];
 arr[j] = temp;
 }
 }
 int temp = arr[i+1];
 arr[i+1] = arr[ub];
 arr[ub] = temp;
 return(i+1);
}
void QuickSort(int arr[], int lb, int ub) {
 if (lb < ub) {
 int pi = partition(arr, lb, ub);
 QuickSort(arr, lb, pi - 1);
 QuickSort(arr, pi + 1, ub);
 }
}
int main() {
 int n=5,lb,ub;
 int arr[] = {5,4,3,2,1};
QuickSort(arr, 0, n-1);
 for(int i=0; i<5; i++) {
 printf("%d ", arr[i]);
 }
}

/*OUTPUT
1 2 3 4 5*/
