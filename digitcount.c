#include<stdio.h>
#include<conio.h>
void main(){
	int n,rem,count=0;
	printf("\nPLease enter the number");
	scanf("%d",&n);
	while(n!=0){
		count++;
		n=n/10;
	}
	printf("\nthe value is %d",count);
	getch();
}
