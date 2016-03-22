//Swapping in different way...
#include<stdio.h>
#include<conio.h>
void main(){
	int a,b;
	printf("enter the first no\n");
	scanf("%d",&a);
	printf("Enter the second number\n");
	scanf("%d",&b);
	printf("\n Before the swap values are.... %d %d",a,b);
	a=a^b;//using the xor operator for swapping the values..
	b=a^b;
	a=a^b;
	//another way
	//a=a+b;
	//b=a-b;
	//a=a-b;
	printf("\n After the swap the values are... %d %d",a,b);
	getch();
}

