// Write a c Program to implement Tower of Hanoi problem.

#include<stdio.h>
void towerofhanoi(int n, char src[6], char helper[6], char dest[6] ) {
 if(n==1) {
 printf("Transfer disc %d from %s to %s\n", n, src, dest);
 return;
 }
 towerofhanoi(n-1, src, dest, helper);
 printf("Transfer disc %d from %s to %s\n", n, src, dest);
 towerofhanoi(n-1, helper, src, dest);
}
int main() {
 int n;
 do {
 printf("-----------------------------------------------\nEnter the number of disc: ");
 scanf("%d", &n);
 towerofhanoi(n, "S", "H", "D");
 } while(n!=0);
}

// OUTPUT
// -----------------------------------------------
// Enter the number of disc: 1
// Transfer disc 1 from S to D
// -----------------------------------------------
// Enter the number of disc: 2
// Transfer disc 1 from S to H
// Transfer disc 2 from S to D
// Transfer disc 1 from H to D
// -----------------------------------------------
// Enter the number of disc: 3
// Transfer disc 1 from S to D
// Transfer disc 2 from S to H
// Transfer disc 1 from D to H
// Transfer disc 3 from S to D
// Transfer disc 1 from H to S
// Transfer disc 2 from H to D
// Transfer disc 1 from S to D
// -----------------------------------------------
// Enter the number of disc: 0
