#include <stdio.h>
int main(){
	int i,s,t,j; 
	for(i=1;i<=13;i=i+2){
		for(s=1;s<=(12-j);s=s+2)
				printf(" ");
		for(j=1;j<=i;j++)
			printf("*");
		printf("\n");
	}
	
	for(i=11;i>=1;i=i-2){
		for(t=1;t<=(15-j);t=t+2)
				printf(" ");
		for(j=1;j<=i;j++)
			printf("*");
		printf("\n");
	}	
	
} 
