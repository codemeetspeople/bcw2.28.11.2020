#include <stdio.h>

int factorialCommented(int n) {
    if ( n < 0 ) {
        return -1;
    }
    if ( n <= 1 ) {
        return 1;
    }
    printf("call: factorial(%d) * %d\n", n-1, n);
    int result = factorialCommented(n-1) * n;
    
    printf("calculated factorial(%d) * %d = %d\n", n-1, n, result);
    return result;
}

int factorial(int n) {
    if ( n < 0 ) {
        return -1;
    }
    if ( n <= 1 ) {
        return 1;
    }
    return factorial(n-1) * n;
}


int fibonacciRecursion(int n) {
    if ( n <= 1 ) {
        return n;
    }
    if ( n == 2 ) {
        return 1;
    }
    return fibonacciRecursion(n-1) + fibonacciRecursion(n-2);
}

int fibonacci(int n) {
    if ( n <= 1 ) {
        return n;
    }
    if ( n == 2 ) {
        return 1;
    }

    int a = 0, b = 1;
    
    for ( int i = 1; i <= n; i++ ) {
        int result = a + b;
        
        b = a;
        a = result;
    }
    return a;
}

int factorialHandler(int result, int current, int limit) {
    if ( current == limit ) {
        return result * limit;
    }
    return factorialHandler(result * current, current + 1, limit);
}

int calculateFactorial(n) {
    if ( n < 0 ) {
        return -1;
    }
    if ( n <= 1 ) {
        return 1;
    }

    return factorialHandler(1, 2, n);
}

int factorialLoop(int n) {
    if ( n < 0 ) {
        return -1;
    }

    int fact = 1;
    
    for ( int i = 1; i <= n; i++ ) {
        fact *= i;
    }
    
    return fact;
}


int main() {
    int n;

    scanf("%d", &n);

    for ( int i = 0; i < 10000000; i++ ) {
        // factorial(10);
        // calculateFactorial(10);
        factorialLoop(n);
    }
    
    return 0;
}
