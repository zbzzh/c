#include<stdio.h>
int main(){
	int a,c,s;
	scanf("%d",&s);
	for(a=1;a<=s;a++){
		for(c=1;c<=a;c++){
			printf("*");
		}
		printf("\n");
	}
}
