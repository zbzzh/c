#include <stdio.h>
int main(){
	char str[100],*p;
	p=str;
	int count;
	gets(p);
	for(count=0;*p!='\0';p++){ //����Ԫ�غ�����Ϊ�൱��a[i]��i++ 
		if(*p>='0'&&*p<'9')
			count++;
	}
	printf("total:%d",count);
}
