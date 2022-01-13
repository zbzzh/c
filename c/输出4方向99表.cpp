#include<stdio.h>
#include<string.h>
int main(){
	int i,j,s;
	char choice[10];
	printf("输出四方向99表:\n");
	for(i=1;i<=9;i++){
			for(j=1;j<=9;j++){
				printf("%4d",i*j);
		}
		printf("\n");
	} 
	printf("请选择你要输入的方向:左上，左下，右上，右下\n"); 
	printf("请输入:");
	gets(choice);
	if(strcmp(choice,"左上")==0){ //输出左上方向 
		for(i=1;i<=9;i++){
			for(j=1;j<=10-i;j++){
				printf("%4d",i*j);
			}
		printf("\n");
		} 
	} 
	if(strcmp(choice,"左下")==0){ //输出左下方向 
		for(i=1;i<=9;i++){
			for(j=1;j<=i;j++){
				printf("%4d",i*j);
		}
		printf("\n");
		} 
	}
	if(strcmp(choice,"右上")==0){
		for(i=1;i<=9;i++){
			for(s=1;s<i;s++){
				printf("    "); //输出空格 
			}
			for(j=i;j<=9;j++){
				printf("%4d",i*j);
			}
		printf("\n");
		} 
	}
	if(strcmp(choice,"右下")==0){
		for(i=1;i<=9;i++){
			for(s=1;s<10-i;s++){ //输出空格 
				printf("    ");
			}
			for(j=(10-i);j<=9;j++){
				printf("%4d",i*j);
			}
		printf("\n"); 
		}
	}
}
