#include <stdio.h>
int main(){
	int a,b;
	void swap(int*,int*);
	scanf("%d %d",&a,&b);
	printf("���������Ϊ:%d %d",a,b);
	swap(&a,&b);
	printf("������:%d %d",a,b); 
}
void swap(int *p1,int *p2){
	int temp;
	temp=*p1;
	*p1=*p2;
	*p2=temp;
}
