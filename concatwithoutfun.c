#include<stdio.h>
#include<conio.h>
#include<string.h>
void concat(char a[],char b[]){
	char c[100];
	int i=0,j=0;
	while(i<strlen(a))
		c[i++]=a[i];
	while(j<strlen(b))
		c[i++]=b[j++];
	c[i]='\0';
	printf("This isnt workiing out...");
	printf("\n Concated values is \n");
	printf("%s",c);
}

void main(){
	char a[100],b[100];
	printf("\n Enter the first String");
	gets(a);
	printf("\n Enter the second String");
	gets(b);
	concat(a,b);
	//printf(strcat(a,b));
	getch();
}