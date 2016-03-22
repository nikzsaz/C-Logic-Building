#include<stdio.h>
#include<conio.h>
void main(){
	int n,power,i=1,sum=1;
	printf("\n PLease enter the number");
	scanf("%d",&n);
	printf("\nPlease enter the power");
	scanf("%d",&power);
	while(i<=power){
		sum=sum*n;
		i++;
	}
	printf("\nThe value is %d",sum);
	getch();
}