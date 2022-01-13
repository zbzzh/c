#include<stdio.h>
#include<stdlib.h>
int main(){
	int arr[3][4],i,j,sum=0,max=0,maxi,maxj;
	printf("该数组的原始数据为\n");
	for(i=0;i<=2;i++)
		for(j=0;j<=3;j++)
			arr[i][j]=rand()%100;			
	for(i=0;i<=2;i++){
		for(j=0;j<=3;j++){
			printf("%d\t",arr[i][j]);
			if(j==3)
				printf("\n");
			if(arr[i][j]>max){
				max=arr[i][j];
				maxi=i;
				maxj=j;
			}
		}	
	}
	printf("该数组的最大元素为%d,此时最大值对应的行列号为%d  %d",max,maxi+1,maxj+1);
}
