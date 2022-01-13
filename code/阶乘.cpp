#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int fact=1;
	int i=1;
	do{
		fact*=i;
		i++;
	}
	while(i<=n);
	printf("%d!=%d",n,fact);
	return 0;
}
