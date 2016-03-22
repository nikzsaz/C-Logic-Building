#include<stdio.h>
#include<conio.h>
void main(){
	int add(int a,int b);
	int c,d,bcomp,sub;
	printf("\n Enter the numbers");
	scanf("%d%d",&c,&d);
	bcomp=add(~d,1);
	sub=add(c,bcomp);
	printf("\n the sum  of the values is %d ",sub);
	getch();
}
int add(int a,int b){
	while(b!=0){
		int carry=(a&b)<<1;
		a=a^b;
		b=carry;
	}
	return a;
}
