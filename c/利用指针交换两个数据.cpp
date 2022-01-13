#include <stdio.h>
int main(){
	int a,b,temp;
	int *p,*q;
	void swap(int *p,int *q);
	printf("请输入两个数字:\n");
	scanf("%d%d",&a,&b);
	printf("原始数据为%d和%d",a,b);
	p=&a;
	q=&b;
	swap(p,q);
	printf("交换后的数据为%d和%d",*p,*q); 
}
void swap(int *p,int *q){
	int temp;
	temp=*p;
	*p=*q;
	*q=temp;
}
