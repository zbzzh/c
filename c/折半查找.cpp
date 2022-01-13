#include <stdio.h>
#include <stdlib.h>
int main(){
	int a[100],i,j,num,max,min=0,n,mid,temp,temp1;
	printf("请输入数组元素个数:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		a[i]=1+rand()%100;
	}
	max=n-1;
	for(i=1;i<=n;i++){
		for(j=0;j<n-i;j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%-4d",a[i]);
	}
	printf("\n请输入你要查找的数据:");
	scanf("%d",&num);
	while(num!=mid){
		mid=(max+min)/2;
		if(a[mid]==num){
			printf("你要找到数据位于数组第%d",mid);
			break;
		}
		else if(num<a[mid]){
			max=mid-1;
		}
		else if(num>a[mid]){
			min=mid+1;
		}
	}
}
