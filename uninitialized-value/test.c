#include<stdio.h>
#include<stdlib.h>

int main(int argc, char** argv) {
    int p;
    if (p) {
        printf("Hello, world!\n");
    }

    int *hp = (int*)malloc(sizeof(int));
    if (*hp) {
        printf("Hello, world!\n");
    }

    return 0;
}
