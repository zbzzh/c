#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	srand((unsigned int)time(NULL));
	int ret,i,num;
	printf("��ӭ����������С��Ϸ��\n");
	printf("��Ϸ����:������10�λ��ᣬ��1-999�ڵ����֣�ϵͳ����ʾ��´��˻��С��\n"); 
	ret=rand()%1000;
	for(i=9;i>=1;i--){
		printf("��������Ҫ�µ�����\n");
		scanf("%d",&num);
		if(num>ret)
		printf("�Բ�����´��ˣ��㻹��%d�λ���\n",i);
		if(num<ret)
		printf("�Բ������С�ˣ��㻹��%d�λ���\n",i);
		if(num==ret){
		printf("��ϲ��¶��ˣ�");
		break;
		}	 
	}
} 

