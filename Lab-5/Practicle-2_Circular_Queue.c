// Write a C program to implement circular queue (Insertion, deletion and traversal).

#include<stdio.h>
int choice,front=-1,rear = -1,size,Queue[20],x;
void enqueue();
void dequeue();
void display();
int main() {
 printf("Enter size of array : ");
 scanf("%d", &size);
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
 }
 } while(choice!=4);
}
void enqueue() {
 if((rear+1)%size == front) {
 printf("Queue is overflow");
 return;
 }
 printf("enter Element : ");
 scanf("%d", &x);
 if(front == -1) {
 front = 0;
 }
 rear = (rear+1)%size;
 Queue[rear] = x;
}
void dequeue() {
 if(front == -1 && rear == -1) {
 printf("Queue is empty");
 }
 if(front == rear) {
 front = rear = -1;
 }
 printf("%d is deleted", Queue[front]);
 front = (front+1)%size;
}
void display() {
 if(front == -1 && rear == -1) {
 printf("Queue is empty");
 }
 else {
 for(int i = front; i != rear; i = (i+1)%size) {
 printf("%d ", Queue[i]);
 }
 printf("%d ", Queue[rear]);
 }
}

/* OUTPUT :
Enter size of array : 5
Enter choice : 1
enter Element : 10
Enter choice : 1
enter Element : 20
Enter choice : 1
enter Element : 30
Enter choice : 1
enter Element : 40
Enter choice : 1
enter Element : 50
Enter choice : 1
Queue is overflow
Enter choice : 3
10 20 30 40 50
Enter choice : 2
10 is deleted
Enter choice : 2
20 is deleted
Enter choice : 1
enter Element : 60
Enter choice : 3
30 40 50 60
Enter choice : 1
enter Element : 70
Enter choice : 3
30 40 50 60 70
Enter choice : 3
30 40 50 60 70
Enter choice : 1
Queue is overflow
Enter choice : 4
Exit */
