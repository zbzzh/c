#include <stdio.h>
#include <stdlib.h>
int main(){
	int a[10];
	int max(int *);
	for(int i=0;i<10;i++)
		a[i]=rand()%1000;
	for(int i=0;i<10;i++)
		printf("%d\t",a[i]);
	printf("����������Ԫ��Ϊ%d",max(a));
}
int max(int *p){
	int i,max;
	max=*p;
	for(i=1;i<10;i++){
		if(*(p+i)>max)
			max=*(p+i);
	}
	return max;
}
