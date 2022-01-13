#include<stdio.h>
int main(){
	int i,j;
	for(i=1;i<=3;i++){
		for(j=1;j<=(7-2*i);j++){ //输出左空格 
			printf(" "); 
		}
		for(j=1;j<=(4*i);j++){ //输出* 
			printf("*");
		}
		for(j=1;j<=(13-4*i);j++) //输出中空格 
			printf(" ");
		for(j=1;j<=(4*i);j++){	//输出* 
			printf("*");
		}
		printf("\n");
	}
	for(i=1;i<=3;i++){ //输出中间三行* 
		for(j=1;j<=27;j++){
			printf("*");
		}
		printf("\n");
	}
	printf(" ");
	for(i=1;i<=25;i++)
	printf("*");
	printf("\n");
	for(i=1;i<=6;i++){
		for(j=1;j<=(2*i);j++){ //输出空格 
			printf(" ");
		}
		for(j=1;j<=(27-4*i);j++){ 	//输出* 
			printf("*");
		}
		printf("\n");
	}
	printf("             ");
	printf("*");
}
