#include<stdio.h>
#include<conio.h>
void main(){
	int a,b;
	printf("\n Enter the first number");
	scanf("%d",&a);
	printf("\n Enter the second number");
	scanf("%d",&b);
	printf("\n Before swap the values are %d %d",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\n After the swap the values are %d %d",a,b);
	getch();
}