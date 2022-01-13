#include <stdio.h>
int main(){
	int arr[100][100],i,j;
	for(i=0;i<10;i++){
		arr[i][0]=1;
		arr[i][i]=1;
	}
	for(i=0;i<10;i++){
		for(j=0;j<=i;j++){
			if(arr[i][j]==1)
			continue;
			arr[i][j]=arr[i-1][j]+arr[i-1][j-1]; 
		}
	}
	for(i=0;i<10;i++){
		for(j=0;j<=i;j++){
			printf("%-5d",arr[i][j]);
		}
		printf("\n");
	}
}
