#include <stdio.h>
#include <stdlib.h>
#define N 10
struct node
{
	char num[20];
	int score;
	struct node* next;
};
struct node *create_node(void);
struct node *create_list(int n);
void out_list(struct node* head);
int main(){
	struct node *head = NULL;
	head = create_list(N);
	out_list(head);
	return 0;
}

struct node *create_node(void)
{
	struct node *p;
	p=(struct node*)calloc(1, sizeof(struct node));
	scanf("%s%d", p->num, &p->score);
	p->next=NULL;
	return p;
}

struct node *create_list(int n)
{
	struct node *New,*p;
	struct node *head;
	int i;
	if (n>=1)
	{
		New=create_node();
		head=New;
		p=New;
	}
	for (i=2;i<n;i++)
	{
		New=create_node();
		p->next=New;
		p=New;
	}
	if (n>=1)
		return head;
	else
		return NULL;

}

void out_list(struct node* head)
{
	struct node *p;
	p=head;
	while (p!=NULL)
	{
		printf("%s  %d\n", p->num, p->score);
		p=p->next;
	}
}
