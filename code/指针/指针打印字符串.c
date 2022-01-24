#include <stdio.h>
int main() {
    char a[] = "abcdefg";
    const char* string = a;
    while (*string) {
        putchar(*string++);
    }
    return 0;
}