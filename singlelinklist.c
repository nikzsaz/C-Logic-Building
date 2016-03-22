#include<stdio.h>
#include<conio.h>
#include<malloc.h>
void main(){
	struct node{
		int info;
		node *link;
	};
	struct node *first,*second,*head;
	char ch,pj;
	first=(struct node*)malloc(sizeof(struct node*));
	printf("\n Enter the number");
	scanf("%d",&first->info);
	head=first;
	printf("\n Want to insert more node press y or n\n");
	ch=getch();
	if(ch=='y'||ch=='Y')
	{	do{
		second=(struct node*)malloc(sizeof(struct node*));
		printf("\n Enter the next node");
		scanf("%d",&second->info);
		first->link=second;
		first=second;
		printf("\n Want to enter more node press y or n");
		pj=getch();
	}while(pj=='y'||pj=='Y');
	second->link=NULL;
	printf("\n Now the inserted value is ");
	while(head!=NULL){
		printf("\n %d ",head->info);
		head=head->link;
	}
	}
	getch();
	}