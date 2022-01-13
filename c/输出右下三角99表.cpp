#include<stdio.h>
int main(){
	int i,j,s;
	for(i=1;i<=9;i++)
	printf("%5d",i);
	printf("\n");
	for(i=1;i<=45;i++)
	printf("-");
//	Êä³öÓÒÏÂÈý½Ç 
	for(j=1;j<=9;j++){
		printf("\n");
		for(s=1;s<j;s++)
		printf("     ");
		for(i=j;i<=9;i++)
			printf("%5d",i*j);
				
	}	
	
	
}
