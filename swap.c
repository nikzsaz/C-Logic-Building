#include<stdio.h>
#include<conio.h>
void main(){
	int a,b,temp;
	printf("Enter the first no.\n");
	scanf("%d",&a);
	printf("Enter the second no.\n");
	scanf("%d",&b);
	printf("\n Before swapping the values are %d %d",a,b);
	temp=a;
	a=b;
	b=temp;
	printf("\n After swapping the values are %d %d",a,b);
	getch();
}