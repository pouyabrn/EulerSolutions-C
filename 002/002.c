#include <stdio.h>

int main() {
    int first = 1;
    int second = 2;
    int next;
    int sum = 2;
    
    while (1) {
        next = first + second;
        if (next >= 4000000) {
            break;
        }
        
        if (next % 2 == 0) {
            sum += next;
        }
        
        first = second;
        second = next;
    }
    
    printf("Sum of even Fibonacci numbers below 4 million: %d\n", sum);
    return 0;
}