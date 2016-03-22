#include<stdio.h>
#include<conio.h>
int fun(){
int i;
int *p=&i;
int j;
for(j=0;*(p+j)!=10;j++){
	;
}
*(p+j)=90;
//#define fun()i=90;
return 0;

}

void main(){
	int i;
	i=10;
	fun();
	printf("%d",i);
	getch();
}