#include <stdio.h>
#include <string.h>
int main(){
	int i,t,cnt=0;
	char arr[100],brr[100];
	gets(arr);
	cnt=strlen(arr);
	for(i=cnt-1;i>=0;i--){
		brr[cnt-1-i]=arr[i];
	}
	if(strcmp(arr,brr)==0)
		printf("YES");
	else
		printf("NO");
}
