/* Write a c program to create calculator (use user defined function named
Calculator). */

#include <stdio.h>
int calculator(double val1, double val2, char ope)
 {
 if(ope == '+') {
 printf("Addition of two numbers is %lf ", val1 + val2);
 }
 else if(ope == '-') {
 printf("Subtraction of two numbers is %lf ", val1 - val2);
 }
 else if(ope == '*') {
 printf("Multiplication of two numbers is %lf ", val1 * val2);
 }
 else if(ope == '/') {
 printf("Division of two numbers is %lf ", val1 / val2);
 } else {
 printf("Invalid operator");
 }
}
void main()
 {
 double val1 , val2;
 char ope;
 printf("Enter First Number ");
 scanf("%lf", &val1);
 printf("Enter Second Number ");
 scanf("%lf", &val2);
 printf("Enter '+' for Add\n '-' for Sub\n '*' for Mul\n '/' for Div\n");
scanf(" %c", &ope);
 calculator(val1,val2,ope);
}

/*OUTPUT
Enter First Number 5
Enter Second Number 7
Enter '+' for Add
'-' for Sub
'*' for Mul
'/' for Div
+
Addition of two numbers is 12.000000 */
