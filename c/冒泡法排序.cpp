#include <stdio.h>
#include <stdlib.h>
#define N 10
int main(){
	int a[N],i,j,temp;
	for(i=0;i<N;i++){
		a[i]=rand()%100;
	}
	printf("原始数据为:");
	for(i=0;i<N;i++){
		printf("%d\t",a[i]);
	}
	for(i=1;i<=N-1;i++){ //表示一共排N-1趟 
		for(j=0;j<(10-i);j++){ //每次排只需要排到10-i项 
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;	
			}
		}
	}
	printf("\n");
	printf("排序后结果:");
	for(i=0;i<N;i++){
		printf("%d\t",a[i]);
	}
}
