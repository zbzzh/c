#include <stdio.h>
int main(){
	int a,b,temp;
	int *p,*q;
	void swap(int *p,int *q);
	printf("��������������:\n");
	scanf("%d%d",&a,&b);
	printf("ԭʼ����Ϊ%d��%d",a,b);
	p=&a;
	q=&b;
	swap(p,q);
	printf("�����������Ϊ%d��%d",*p,*q); 
}
void swap(int *p,int *q){
	int temp;
	temp=*p;
	*p=*q;
	*q=temp;
}
