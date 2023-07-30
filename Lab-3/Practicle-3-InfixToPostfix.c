// Write a C Program to convert infix notation into its equivalent postfix notation using stack.
#include<stdio.h>
#include<ctype.h>
char stack[100];
int top = -1;
void push(char x)
{
 top++;
 stack[top] = x;
}
char pop()
{
 if(top == -1)
 return -1;
 else
 return stack[top--];
}
int priority(char x)
{
 if(x == '(')
 return 0;
 if(x == '+' || x == '-')
 return 1;
 if(x == '*' || x == '/')
 return 2;
 return 0;
}
int main()
{
 char exp[20];
 char *e, x;
 printf("Enter the expression : ");
 scanf("%s",exp);
 printf("---------------------------------------\n");
 printf("Expression in Infix form: %s\n", exp);
 printf("---------------------------------------\n");
 printf("Expression in Postfix form: ");
 e = exp;
 while(*e != '\0') {
 if(isalnum(*e)) { // it checks that is char is alphabet or not
 printf("%c ",*e);
 }
 else if(*e == '(') {
 push(*e);
 }
 else if(*e == ')') {
 while((x = pop()) != '(')
 printf("%c ", x);
 }
 else {
 while(priority(stack[top]) >= priority(*e))
 printf("%c ",pop());
 push(*e);
 } e++;
 }
 while(top != -1)
 {
printf("%c ",pop());
 }
}

// OUTPUT
// Enter the expression : A+B-C*D/E*F
// ---------------------------------------
// Expression in Infix form: A+B-C*D/E*F
// ---------------------------------------
// Expression in Postfix form: A B + C D * E / F * -
