#include<stdio.h>
#include<stdlib.h>

int main(int argc, char** argv) {
    int* p = (int*)malloc(sizeof(int));
    *p = 3;
    printf("pointer value : %d\n", *p);

    //free(p);

    return 0;
}
