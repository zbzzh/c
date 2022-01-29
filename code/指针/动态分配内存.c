#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int* ptr;
    ptr = (int*)malloc(5 * sizeof(int));
    scanf("%d %d %d %d %d", ptr, ptr + 1, ptr + 2, ptr + 3, ptr + 4);
    printf("%d %d %d %d %d", *ptr, *(ptr + 1), *(ptr + 2), *(ptr + 3), *(ptr + 4));
    free(ptr);
}
