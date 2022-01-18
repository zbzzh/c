#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Node{ //����ڵ� 
	int data;//���������� 
	struct Node *next;//����ָ���� 
};
struct Node *create_list()//�������� 
{
	struct Node *headNode=(struct Node *)calloc(1,sizeof(struct Node));//����ͷ�ڵ� 
	headNode->next=NULL;//��ָ����ֵΪ�� 
	return headNode;//����ͷ�ڵ��ַ 
}
struct Node *create_Node(int data)//�����ڵ� 
{
	struct Node *NewNode=(struct Node *)calloc(1,sizeof(struct Node));//�����½ڵ� 
	NewNode->data=data;//��������ֵ 
	NewNode->next=NULL;//��ָ����ֵ 
	return NewNode;//�����½ڵ��ַ 
}
void printlist(struct Node *headNode)//��ӡ�ڵ� 
{
	struct Node *pMove=headNode->next;//�����ƶ�ָ�� 
	while(pMove){
		printf("%d",pMove->data);//��ӡ������ 
		pMove=pMove->next;//ָ����һ�ڵ� 
	}
	printf("\n");
}
void insertNodeByHead(struct Node *headNode,int data)//ͷ�巨 
{
	struct Node *NewNode=create_Node(data);
	NewNode->next=headNode->next;
	headNode->next=NewNode;
}
void insertNodeByFoot(struct Node *headNode,int data)//β�巨 
{
	struct Node *NewNode=create_Node(data);
	struct Node *pMove;
	pMove=headNode;
	while(pMove->next!=NULL){
		pMove=pMove->next;
	}	
	pMove->next=NewNode;
} 
int deleteNodeByAppoin(struct Node *headNode,int posData)//ɾ���ڵ� 
{
	struct Node *posNode=headNode->next;
	struct Node *posNodeFront=headNode; 
	if(posNode==NULL){
		printf("Cannot delete!");
		return 0;	
	}
	else{
		while(posNode->data!=posData)
		{
			posNodeFront=posNode;
			posNode=posNodeFront->next;
			if(posNode==NULL){
				printf("Cannot find data!");
				return 0;
			}
		}
		posNodeFront->next=posNode->next;
		free(posNode);
	}	
	
} 
int main(){
	struct Node *list=create_list();
	int data;
	char choice;
	while(1){
		printf("Input data:");
		setbuf(stdin,NULL);
		scanf("%d",&data);
		insertNodeByFoot(list,data);
		printf("continue?(Y/N)");
		setbuf(stdin,NULL);
		choice=getchar();
		if(choice=='N'||choice=='n')
		break; 
	}
	printlist(list);
	printf("Enter data you want to delete:");
	scanf("%d",&data);
	if(deleteNodeByAppoin(list,data))
		printlist(list);
	
	
}
