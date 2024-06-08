#include <stdio.h>
unsigned long long factorial(unsigned int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}
int main() {
    unsigned int number = 5;
    unsigned long long result = factorial(number);
    printf("Factorial of %u = %llu", number, result);
    return 0;
}

