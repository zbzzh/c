#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Node{ //定义节点 
	int data;//定义数据域 
	struct Node *next;//定义指针域 
};
struct Node *create_list()//创建链表 
{
	struct Node *headNode=(struct Node *)calloc(1,sizeof(struct Node));//定义头节点 
	headNode->next=NULL;//对指针域赋值为空 
	return headNode;//返回头节点地址 
}
struct Node *create_Node(int data)//创建节点 
{
	struct Node *NewNode=(struct Node *)calloc(1,sizeof(struct Node));//定义新节点 
	NewNode->data=data;//对数据域赋值 
	NewNode->next=NULL;//对指针域赋值 
	return NewNode;//返回新节点地址 
}
void printlist(struct Node *headNode)//打印节点 
{
	struct Node *pMove=headNode->next;//定义移动指针 
	while(pMove){
		printf("%d",pMove->data);//打印数据域 
		pMove=pMove->next;//指向下一节点 
	}
	printf("\n");
}
void insertNodeByHead(struct Node *headNode,int data)//头插法 
{
	struct Node *NewNode=create_Node(data);
	NewNode->next=headNode->next;
	headNode->next=NewNode;
}
void insertNodeByFoot(struct Node *headNode,int data)//尾插法 
{
	struct Node *NewNode=create_Node(data);
	struct Node *pMove;
	pMove=headNode;
	while(pMove->next!=NULL){
		pMove=pMove->next;
	}	
	pMove->next=NewNode;
} 
int deleteNodeByAppoin(struct Node *headNode,int posData)//删除节点 
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
