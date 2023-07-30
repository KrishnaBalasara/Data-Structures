// Write a C Program to implement Stack with all necessary overflow and underflow condition (Use array as data structure). 1)PUSH 2) POP 3) DISPLAY.
#include<stdio.h>
int stack[10],choice,n,top,x,i;
void push(void);
void pop(void);
void display(void);
int main() {
   top=-1;
   printf("Enter the size of STACK:\n");
   scanf("%d",&n);
   printf("STACK OPERATIONS USING ARRAY\n");
   printf("--------------------------------\n");
   printf("1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\n");
   do {
     printf("Enter your Choice from 1 to 4: \n");
     scanf("%d",&choice);
     switch(choice) {
       case 1: {
         push();
         break;
       }
       case 2: {
         pop();
         break;
       }
       case 3: {
         display();
         break;
       }
       case 4: {
         printf("\n\t EXIT POINT\n");
         break;
       }
       default: {
         printf ("\n\t Please Enter a Valid Choice(1/2/3/4)\n");
       }
     }
    }while(choice!=4);
   return 0;
  }
  void push() {
     if(top>=n-1) {
       printf("STACK is over flow\n");
     }
     else {
       printf("Enter a value to be pushed:");
       scanf("%d",&x);
       top++;
       stack[top]=x;
     }
  }
  void pop() {
     if(top<=-1) {
       printf("Stack is under flow\n");
     }
     else {
       printf("The popped elements is %d\n",stack[top]);
       top--;
     }
  }
  void display() {
       if(top>=0) {
         printf("The elements in STACK \n");
         for(i=top; i>=0; i--) {
           printf("|");
           printf("__%d__|\n",stack[i]);
         }
         printf("Press Next Choice\n");
       }
       else {
         printf("The STACK is empty\n");
         for(int i=0; i<n; i++) {
           printf("|____|\n");
       }
    }
}

// OUTPUT
// Enter the size of STACK:
// 5
// STACK OPERATIONS USING ARRAY
// --------------------------------
// 1.PUSH
// 2.POP
// 3.DISPLAY
//   4.EXIT
// Enter your Choice from 1 to 4:
// 1
// Enter a value to be pushed:5
// Enter your Choice from 1 to 4:
// 1
// Enter a value to be pushed:4
// Enter your Choice from 1 to 4:
// 1
// Enter a value to be pushed:3
// Enter your Choice from 1 to 4:
// 1
// Enter a value to be pushed:2
// Enter your Choice from 1 to 4:
// 1
// Enter a value to be pushed:1
// Enter your Choice from 1 to 4:
// 3
// The elements in STACK
// |__1__|
// |__2__|
// |__3__|
// |__4__|
// |__5__|
// Press Next Choice
// Enter your Choice from 1 to 4:
// 2
// The popped elements is 1
// Enter your Choice from 1 to 4:
// 2
// The popped elements is 2
// Enter your Choice from 1 to 4:
// 3
// The elements in STACK
// |__3__|
// |__4__|
// |__5__|
// Press Next Choice
// Enter your Choice from 1 to 4:
// 2
// The popped elements is 3
// Enter your Choice from 1 to 4:
// 2
// The popped elements is 4
// Enter your Choice from 1 to 4:
// 2
// The popped elements is 5
// Enter your Choice from 1 to 4:
// 2
// Stack is under flow
// Enter your Choice from 1 to 4:
// 3
//   The STACK is empty
// |____|
// |____|
// |____|
|____|
|____|
Enter your Choice from 1 to 4:
4
 EXIT POINT
