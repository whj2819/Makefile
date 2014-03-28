#include <stdio.h>
#include <stdlib.h>

void f1()
{
    int i;
    int *p;
    for (i = 0; i < 100; i++) {
        p = malloc(sizeof(int));
        *p = 10;
        free(p);
    }
}

void f2()
{
    int i;
    int *p;
    for (i = 0; i < 10; i++) {
        p = malloc(sizeof(int));
        *p = 10;
        free(p);
    }
}

void f3()
{
    int i;
    int *p;
    for (i = 0; i < 50; i++) {
        p = malloc(sizeof(int));
        *p = 10;
        free(p);
    }
}

int main()
{
    int i;

    for (i = 0; i < 1000000; i++) {
        f1();
        f2();
        f3();
    }

    return 0;
}
