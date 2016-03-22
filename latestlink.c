#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<malloc.h>
void main(){
	char ch;
	struct node{
		int info;
		node *link;
	};
	struct node *first,*second,*head;
	
	first=(struct node*)malloc(sizeof(struct node*));
	printf("\n Please enter the first node");
	scanf("%d",&first->info);
	head=first;
	do{
		second=(struct node*)malloc(sizeof(struct node*));
		printf("\n Enter the next node");
		scanf("%d",&second->info);
		first->link=second;
		first=second;
		printf("\n want more node");
		ch=getch();
	}while(ch=='y'||ch=='Y');
	second->link=NULL;
	printf("\n Now the inserted node is ");
	while(head!=NULL){
		printf("\n %d",head->info);
		head=head->link;
}
getch();
}
