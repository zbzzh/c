#include <stdio.h>
int main() {
    int a = 2;
    int b = 5;
    int* const p = &a;//指p是const，即p不能指向别人，但可以通过p修改a的值，因为a不是const
    int const* q = &b;//表示*q是const，即不可以通过*q去修改b的值
    const int* q = &b;//同上
    
    printf("%d\n", *p);

}
