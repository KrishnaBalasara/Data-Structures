// Write a C program to implement simple queue (Insertion, deletion and traversal).

#include<stdio.h>
int choice,front=-1,rear = -1,n,Queue[20],x;
void enqueue();
void dequeue();
void display();
int main() {
 printf("Enter size of array : ");
 scanf("%d", &n);
 do {
 printf("\nEnter choice : ");
 scanf("%d", &choice);
 switch(choice) {
 case 1 : {
 enqueue();
 break;
 }
 case 2 : {
 dequeue();
 break;
 }
 case 3 : {
 display();
 break;
 }
 case 4 : {
 printf("Exit");
 break;
 }
 default: {
 printf("Enter valid number");
 break;
 }
 }
 } while(choice!=4);
}
void enqueue() {
 if(rear == n-1) {
 printf("Overflow\n");
 }
 else {
 if(front == -1) {
 front = 0;
 }
 rear++;
 printf("Enter Element : ");
 scanf("%d", &x);
 Queue[rear] = x;
 }
 }
void dequeue() {
 if(front == -1 || front > rear) {
 printf("Overflow\n");
 }
 else {
 printf("Element deleted");
 front++;
 }
}
void display() {
 if(front == -1 || front > rear) {
 printf("Overflow\n");
 }
 else {
 for(int i=front; i<=rear; i++) {
 printf(" %d ", Queue[i]);
 }
 }
}

/* OUTPUT :
Enter size of array : 3
Enter choice : 1
Enter Element : 10
Enter choice : 1
Enter Element : 20
Enter choice : 1
Enter Element : 30
Enter choice : 1
Overflow
Enter choice : 2
Element deleted
Enter choice : 3
20 30
Enter choice : 4 Exit */
