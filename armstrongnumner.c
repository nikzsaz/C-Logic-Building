//here we goes for the armstrong number.
#include<stdio.h>
#include<conio.h>
void main(){

	int a,t,l,sum=0;
	printf("\nPlease enter your number\n");
	scanf("%d",&a);
	t=a;
	while(a>0){
		l=a%10;
		sum=sum+l*l*l;
		a=a/10;
	}
	if(sum==t)
		printf("Given number is the armstrong number");
	else
		printf("Given number is not the armstrong number");
	getch();

}