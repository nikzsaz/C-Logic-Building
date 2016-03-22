#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
	char a[100],b[100];
	printf("\n Enter the string for the pallindorme");
	gets(a);
	strcpy(b,a);
	strrev(a);
	if(strcmp(a,b)==0)
		printf("Given string is pallindrome");
	else
		printf("Given string is not pallindrome");
	getch();
}