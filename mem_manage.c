#include <stdio.h>
#include <stdlib.h>

int globalVar1 = 10;
int globalVar2 = 20;
int globalVar3 = 30;

void recursiveFunction(int n) {
    int localVariable = n;
    printf("Stack Depth: %d, Local Variable Address: %p\n", n, &localVariable);

    if (n > 0) {
        recursiveFunction(n - 1);
    }
}

int main() {
    recursiveFunction(3);

    int heapVar1 = (int)malloc(sizeof(int));
    int heapVar2 = (int)malloc(sizeof(int));
    int heapVar3 = (int)malloc(sizeof(int));

    printf("Heap Variable 1 Address: %p\n", heapVar1);
    printf("Heap Variable 2 Address: %p\n", heapVar2);
    printf("Heap Variable 3 Address: %p\n", heapVar3);

    globalVar1 = 100;
    globalVar2 = 200;
    globalVar3 = 300;

    printf("Global Variable 1 Address: %p\n", &globalVar1);
    printf("Global Variable 2 Address: %p\n", &globalVar2);
    printf("Global Variable 3 Address: %p\n", &globalVar3);

    free(heapVar1);
    free(heapVar2);
    free(heapVar3);

    return 0;
}