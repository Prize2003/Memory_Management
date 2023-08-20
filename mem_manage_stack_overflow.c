#include <stdio.h>

void recursiveFunction() {
    int localVariable;
    printf("Stack Overflow Example\n");
    recursiveFunction(); 
}

int main() {
    recursiveFunction(); 
    return 0;
}