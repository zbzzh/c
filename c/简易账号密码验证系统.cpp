#include <stdio.h>
#include <string.h>
int main(){
	char passwd[200],account[100],temp1[200],temp2[100];
	printf("��ӭʹ��ϵͳ\n");
	printf("����������˺�:");
	gets(account);
	printf("�������������:");
	gets(passwd);
	printf("ϵͳ�ѱ�������˺�����\n");
	printf("���������֤ϵͳ\n");
	printf("����������˺�:");
	gets(temp1);
	if(strcmp(account,temp1)==0){
		printf("��¼�˺�");
		puts(account);
		printf("�������������:"); 
		gets(temp2);
		if(strcmp(temp2,passwd)==0){
			printf("������֤�ɹ���");
		}
		else printf("�����������");
		
	}
	else printf("ϵͳ��û��%s�˺�",temp1); 
	 
}
