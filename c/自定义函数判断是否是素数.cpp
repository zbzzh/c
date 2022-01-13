#include<stdio.h>
int main(){
	int isprime(int num);
	int num,temp;
	printf("请输入一个数");
	scanf("%d",&num);
	temp=isprime(num);
	if(temp==1)
	printf("是素数");
	if(temp==0)
	printf("不是素数");	
}

int isprime(int num){
	int ret=1;
	for(int i=2;i<num;i++){
		if(num%i==0){
			ret=0;
			break;
		}
	}
	return ret;
}
