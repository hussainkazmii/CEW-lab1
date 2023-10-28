#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

void printFibonacciSeries(int m) {
    printf("Fibonacci series up to %d terms:\n", m);

    for (int i = 0; i < m; i++) {
        printf("%d ", fibonacci(i));
    }

    printf("\n");
}

int fib() {
    int n;
    printf("Enter the number of terms for the Fibonacci series: ");
    scanf("%d", &n);
    printFibonacciSeries(n);

    return 0;
}

