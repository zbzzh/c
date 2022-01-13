#include <stdio.h>
int main(){
	char str[100],*p;
	p=str;
	int count;
	gets(p);
	for(count=0;*p!='\0';p++){ //数组元素后移以为相当于a[i]，i++ 
		if(*p>='0'&&*p<'9')
			count++;
	}
	printf("total:%d",count);
}
