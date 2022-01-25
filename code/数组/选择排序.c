#include <stdio.h>
#include <stdlib.h>
#define N 10
int main() {
    int a[N], i, j, temp;
    for (i = 0;i < N;i++) {
        a[i] = rand() % 100;
    }
    printf("原始数据为:");
    for (i = 0;i < N;i++) {
        printf("%d\t", a[i]);
    }
    for (i = 0;i < N - 1;i++) { //选择排序
        for (j = (i + 1);j < N;j++) { 
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("\n");
    printf("排序后结果:");
    for (i = 0;i < N;i++) {
        printf("%d\t", a[i]);
    }
}