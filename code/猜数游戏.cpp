#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	srand((unsigned int)time(NULL));
	int ret,i,num;
	printf("欢迎来到猜数字小游戏！\n");
	printf("游戏介绍:您共有10次机会，猜1-999内的数字，系统会提示你猜大了或猜小了\n"); 
	ret=rand()%1000;
	for(i=9;i>=1;i--){
		printf("请输入你要猜的数：\n");
		scanf("%d",&num);
		if(num>ret)
		printf("对不起你猜大了，你还有%d次机会\n",i);
		if(num<ret)
		printf("对不起你猜小了，你还有%d次机会\n",i);
		if(num==ret){
		printf("恭喜你猜对了！");
		break;
		}	 
	}
} 

