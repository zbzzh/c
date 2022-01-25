#include <stdio.h>
int main() {
    int a = 1;
    int* p = &a;
    int** q = &p;
    printf("%d", **q);
}