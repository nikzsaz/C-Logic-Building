//for the fibonacci series...
#include<stdio.h>
#include<conio.h>
void main(){
	int a=0,b=1,n,c,i;
	printf("\n Enter the no of times to generate fiboacci");
	scanf("%d",&n);
	printf("\n HERE COMES YOUR FIBONACCI ");
	printf("%d %d ",a,b);
	for(i=0;i<n;i++){
		c=a+b;
		a=b;
		b=c;
		printf("%d ",c);
	}
	getch();
}


