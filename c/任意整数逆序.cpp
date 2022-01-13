#include <stdio.h>
int main(){
	int digit,x;
	int ret=0;
	scanf("%d",&x);
		while(x>0){	
		digit=x%10;
		ret=ret*10+digit;
		x/=10;}
	printf("%d",ret);
}
