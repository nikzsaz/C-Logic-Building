//implementing the  heap sort...
#include<stdio.h>
#include<conio.h>
#include<climits>
void main(){
	int no,i,heap[100],c,root,temp,j;
	printf("\n Please enter the number of elements\n");
	scanf("%d",&no);
	printf("\n Enter the elements to the heap\n");
	for(i=0;i<no;i++){
		printf("\n [%d] ",i);
		scanf("%d",&heap[i]);
	}
	for(i=0;i<no;i++){
		c=i;
		do{
			root=(c-1)/2;
			if(heap[root]<heap[c]){
				temp=heap[root];
				heap[root]=heap[c];
				heap[c]=temp;
			}
			c=root;
		}while(c!=0);
	}
	printf("\n here is the list of the heap order\n");
	for(i=0;i<no;i++)
		printf("\n %d ",heap[i]);

	for(j=no-1;j>=0;j--){
		printf("%d",j);
		temp=heap[0];
		heap[0]=heap[j];
		heap[j]=temp;
		root=0;
		do{
			c=2*root-1;
			printf("%d",c);
			if((heap[c]<heap[c+1]) && c<(j-1))
				c++;
			if(heap[root]<heap[c] && c<j){
				temp=heap[root];
				heap[root]=heap[c];
				heap[c]=temp;
			}
			root=c;
		}while(c<j);
	}
	printf("\n Now the sorted array is\n");
	for(i=0;i<no;i++)
		printf(" \n%d ",heap[i]);
	getch();
}