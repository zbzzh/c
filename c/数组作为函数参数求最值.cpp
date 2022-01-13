#include <stdio.h>
#include <stdlib.h>
int main(){
	int a[10],i;
	int max(int []);
	for(i=0;i<10;i++)
		a[i]=rand()%100;
	for(i=0;i<10;i++)
		printf("%d\t",a[i]);
	printf("\n最大的元素为%d",max(a));
	
}

int max(int a[]){
	int i,max;
	max=a[0];
	for(i=0;i<10;i++){
		if(a[i]>max)
			max=a[i];
	}
	return max;
}
