#include <stdio.h>
int main() {
    char arr[] = "hello world";
    char b;
    char* p = arr;
    int is_within(char a, char* p);
    b = getchar();
    if (is_within(b, p))
    {
        printf("ok");
    }
    else
        printf("no");
}
int is_within(char b, char* p) {
    while (*p != '\0') {
        if (*p == b) {
            return 1;
        }
        else
            p++;
    }
    return 0;
}