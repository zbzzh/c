#include <stdio.h>
int main(){
	int gewei,shiwei,baiwei,i;
	for(i=100;i<1000;i++){
		gewei=i%10;
		shiwei=(i/10)%10;
		baiwei=(i/100);
		if(baiwei*baiwei*baiwei+shiwei*shiwei*shiwei+gewei*gewei*gewei==i)
		printf("%d\n",i);
	}
}
