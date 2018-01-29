#include <stdio.h>
 
// ប្រកាស Factorial Function ដែលមាន Parameter ជា int
long factorial(int);
 
void main()
{
    int number;
    long fact = 1;
 
    printf("Enter a number to calculate\n");
    scanf("%d", &number);
 
    long total = 0;
    for(int i = 1; i <= number; i++) {
        total = total + (factorial(2*i)*factorial(3*i)); 
    }
    printf("%d! = %ld\n", number, total);
}

// Factorial Definition
long factorial(int n)
{
    long result = 1;
    for (int i = 1; i <= n; i++){
        result = result * i;
    }
    return result;
}

