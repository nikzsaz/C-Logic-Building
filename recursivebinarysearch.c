//Lets now start the binary searching..
#include<stdio.h>
#include<conio.h>
#include<climits>
int binary(int [],int,int,int,int);
void main(){
	int i,first,last,middle,n,search,a[100],c;
	printf("\nPlease Enter the number of elements\n");
	scanf("%d",&n);
	printf("\n Now Please Enter the NUmber\n");
	for(i=0;i<n;i++){
		printf(" [%d] ",i);
		scanf("%d",&a[i]);
	}
	printf("\n Now please enter the value you want to search");
	scanf("%d",&search);
	first=0;
	last=n-1;
	c=binary(a,n,search,first,last);
	if(c==0)
		printf("\n Sorry the element is not found :(");
	else
		printf("number is found at index %d ",c+1);
	getch();
}
int binary(int a[],int n,int m,int l,int u){
	int mid,c=0;
	if(l<=u){
		mid=(l+u)/2;
		if(m==a[mid]){
			return mid;
		}
		else if(m<a[mid]){
			return binary(a,n,m,l,mid-1);
		}
		else{
			return binary(a,n,m,mid+1,u);
		}
	}
	else
		return 0;
}

	

