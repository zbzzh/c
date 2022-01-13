#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
	char xing[20],ming[20],choice1[10],choice2[10],choice3[10],change[20];
	enter:
	printf("请输入你的姓:");
	gets(xing);
	printf("请输入你的名:");
	gets(ming);
	printf("你的全名为:%s%s\n",xing,ming);
	printf("请输入你是否要改名?(回答是或否)");
	gets(choice1);
	if(strcmp(choice1,"是")==0){
	printf("请输入你要改名还是改姓?(回答改名或改姓)"); 
	gets(choice2);
		if(strcmp(choice2,"改名")==0){
			printf("请输入你要改的名字:");
			gets(change);
			strcpy(ming,change);
			strcat(xing,ming);
			printf("恭喜你改名成功，你的新名为:");
			puts(xing); 
	}
		else if(strcmp(choice2,"改姓")==0){
			printf("请输入你要改的姓:");
			gets(change);
			strcpy(xing,change);
			strcat(xing,ming);
			printf("恭喜你改姓成功，你的新名为:");
			puts(xing); 	
		}
		else printf("请正确使用系统"); 
	}
	else if(strcmp(choice1,"否")==0){
		printf("是否退出系统?(回答是或否)");
		gets(choice3);
		if(strcmp(choice3,"是")==0)
		exit(0);
		else if(strcmp(choice3,"否")==0)
		goto enter;
		else printf("请正确使用系统");
	}
	else printf("请正确使用系统");
	
}
