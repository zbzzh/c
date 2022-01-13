#include <stdio.h>
int main(){
	int x,result;
	scanf("%d",&x);
	if(x<0){
	result=1;
	}
	else if(x>=0&&x<10){
	result=2;
	}
	else if(x>=10){
		result=2*x;
	}
	printf("%d",result);
	return 0;
}
