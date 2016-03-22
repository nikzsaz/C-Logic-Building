//program to find whether the string is keyword or not as well as constant or not
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
void main(){
	int i,flag=0,m,len,a;
	char s[32][10]={"auto","break","case","char","const","continue","default","do","double",
		"else","enum","extern","float","for","goto","if","int","long","register","return",
		"short","signed","sizeof","static","struct","switch","typedef","union","unsigned",
		"void","volatile","while"},st[10];
	//clrscr()
	printf("\nPlease Enter the string ");
	gets(st);
	len=strlen(st);
	printf("\n\n      It is processing for the word the ");
	puts(st);
	for(i=0;i<32;i++){
		m=strcmp(st,s[i]);
		if(m==0)
			flag=1;
	}
	if(flag!=0)
		printf("\n****** Its is a Keyword  ******");
	else{
		printf("\n****** It is not keyword  ******");
		printf("\n\n\n");
		printf("\n     Processing for the Constant  \n");
		a=0;
		while(a<len){
			if(isdigit(st[a])){
			//a++;
			}
			else{
			}
			a++;
		}
	//	printf(" It is not a constant ");
			//break;
		if(a==len){
			printf("\n****** it is a constant  ******");
		}
		else{
			printf("\n****** it is not a constant  ******");
		}
	}
		getch();
	}