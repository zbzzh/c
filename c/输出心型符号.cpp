#include<stdio.h>
int main(){
	int i,j;
	for(i=1;i<=3;i++){
		for(j=1;j<=(7-2*i);j++){ //�����ո� 
			printf(" "); 
		}
		for(j=1;j<=(4*i);j++){ //���* 
			printf("*");
		}
		for(j=1;j<=(13-4*i);j++) //����пո� 
			printf(" ");
		for(j=1;j<=(4*i);j++){	//���* 
			printf("*");
		}
		printf("\n");
	}
	for(i=1;i<=3;i++){ //����м�����* 
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
		for(j=1;j<=(2*i);j++){ //����ո� 
			printf(" ");
		}
		for(j=1;j<=(27-4*i);j++){ 	//���* 
			printf("*");
		}
		printf("\n");
	}
	printf("             ");
	printf("*");
}
