#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
	char xing[20],ming[20],choice1[10],choice2[10],choice3[10],change[20];
	enter:
	printf("�����������:");
	gets(xing);
	printf("�����������:");
	gets(ming);
	printf("���ȫ��Ϊ:%s%s\n",xing,ming);
	printf("���������Ƿ�Ҫ����?(�ش��ǻ��)");
	gets(choice1);
	if(strcmp(choice1,"��")==0){
	printf("��������Ҫ�������Ǹ���?(�ش���������)"); 
	gets(choice2);
		if(strcmp(choice2,"����")==0){
			printf("��������Ҫ�ĵ�����:");
			gets(change);
			strcpy(ming,change);
			strcat(xing,ming);
			printf("��ϲ������ɹ����������Ϊ:");
			puts(xing); 
	}
		else if(strcmp(choice2,"����")==0){
			printf("��������Ҫ�ĵ���:");
			gets(change);
			strcpy(xing,change);
			strcat(xing,ming);
			printf("��ϲ����ճɹ����������Ϊ:");
			puts(xing); 	
		}
		else printf("����ȷʹ��ϵͳ"); 
	}
	else if(strcmp(choice1,"��")==0){
		printf("�Ƿ��˳�ϵͳ?(�ش��ǻ��)");
		gets(choice3);
		if(strcmp(choice3,"��")==0)
		exit(0);
		else if(strcmp(choice3,"��")==0)
		goto enter;
		else printf("����ȷʹ��ϵͳ");
	}
	else printf("����ȷʹ��ϵͳ");
	
}
