#include<stdio.h>
#include<string.h>
int main(){
	int i,j,s;
	char choice[10];
	printf("����ķ���99��:\n");
	for(i=1;i<=9;i++){
			for(j=1;j<=9;j++){
				printf("%4d",i*j);
		}
		printf("\n");
	} 
	printf("��ѡ����Ҫ����ķ���:���ϣ����£����ϣ�����\n"); 
	printf("������:");
	gets(choice);
	if(strcmp(choice,"����")==0){ //������Ϸ��� 
		for(i=1;i<=9;i++){
			for(j=1;j<=10-i;j++){
				printf("%4d",i*j);
			}
		printf("\n");
		} 
	} 
	if(strcmp(choice,"����")==0){ //������·��� 
		for(i=1;i<=9;i++){
			for(j=1;j<=i;j++){
				printf("%4d",i*j);
		}
		printf("\n");
		} 
	}
	if(strcmp(choice,"����")==0){
		for(i=1;i<=9;i++){
			for(s=1;s<i;s++){
				printf("    "); //����ո� 
			}
			for(j=i;j<=9;j++){
				printf("%4d",i*j);
			}
		printf("\n");
		} 
	}
	if(strcmp(choice,"����")==0){
		for(i=1;i<=9;i++){
			for(s=1;s<10-i;s++){ //����ո� 
				printf("    ");
			}
			for(j=(10-i);j<=9;j++){
				printf("%4d",i*j);
			}
		printf("\n"); 
		}
	}
}
