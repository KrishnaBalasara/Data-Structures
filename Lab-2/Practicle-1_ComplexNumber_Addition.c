// Write a C Program to perform addition on 2 complex number using structure. (Use user defined function addition).
    #include <stdio.h>
    typedef struct complex {
       float real;
       float imag;
    } complex;
    complex addition(complex n1, complex n2);
    int main() {
       complex n1, n2, result;
       printf("Enter the real and imaginary parts of two numbers: \n");
       scanf("%f %f", &n1.real, &n1.imag);
       scanf("%f %f", &n2.real, &n2.imag);
       result = addition(n1, n2);
       printf("----------------------------------\n");
       printf("Sum = %.1f + %.1fi", result.real, result.imag); }
       complex addition(complex n1, complex n2) {
       complex temp;
       temp.real = n1.real + n2.real;
       temp.imag = n1.imag + n2.imag;
       return (temp);
    }

/* OUTPUT
Enter the real and imaginary parts of two numbers:
5 2
7 3
----------------------------------
Sum = 12.0 + 5.0i */
