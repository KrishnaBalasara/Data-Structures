/* Write a c program to implement function Swap using two different
parameter passing mechanism */

#include <stdio.h>
void swap(int a ,int b)
{
 int temp;
 temp=a;
 a=b;
 b=temp;
 printf("After swapping a=%d, b=%d" ,a ,b);
}
int main()
{
 int a=2,b=3;
 printf("Before swapping a=%d, b=%d\n" ,a, b);
 swap(a,b);
}

/* OUTPUT
Before swapping a=2, b=3
After swapping a=3, b=2 */
