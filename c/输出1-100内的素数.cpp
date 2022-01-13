#include <stdio.h>
int main(){
	int x,i;
	int isprime=1;
	for(x=2;x<100;x++)
	{
		for(i=2;i<x;i++){
			if(x%i==0){
				isprime=0;
				break;
			}
		}
		if(isprime==1){
		printf("%d\n",x);	
		}
		else{
			isprime=1;
		}
	}
	
	

	return 0;
}
