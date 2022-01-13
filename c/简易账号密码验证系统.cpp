#include <stdio.h>
#include <string.h>
int main(){
	char passwd[200],account[100],temp1[200],temp2[100];
	printf("欢迎使用系统\n");
	printf("请输入你的账号:");
	gets(account);
	printf("请输入你的密码:");
	gets(passwd);
	printf("系统已保存你的账号密码\n");
	printf("下面进入验证系统\n");
	printf("请输入你的账号:");
	gets(temp1);
	if(strcmp(account,temp1)==0){
		printf("登录账号");
		puts(account);
		printf("请输入你的密码:"); 
		gets(temp2);
		if(strcmp(temp2,passwd)==0){
			printf("密码验证成功！");
		}
		else printf("密码输入错误");
		
	}
	else printf("系统中没有%s账号",temp1); 
	 
}
