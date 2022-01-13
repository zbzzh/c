#include <stdio.h>
int main(){
	int x,i;
	int isprime=1;
	int count;
	for(x=2;count<101;x++)
	{
		for(i=2;i<x;i++){
			if(x%i==0){
				isprime=0;
				break;
			}
		}
		if(isprime==1){
		printf("%d\n",x);
		count++;	
		}
		else{
			isprime=1;
		}
	}	
	return 0;
}
