//implementation of getchar() as gets()
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
	int i=0;
	char ch,str[20];
	ch=getchar();
	while(ch!='*'){
		str[i]=ch;
		i++;
		ch=getchar();
	}
	str[i]='\0';
	printf("\n\n Given char is  %s ",str);
	getch();
}
