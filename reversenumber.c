//now doing the reversing of the number
#include<stdio.h>
#include<conio.h>
void main(){
	int n,rev=0;
	printf("\nPlease enter the number\n");
	scanf("%d",&n);
	while(n!=0){
		rev=rev*10;
		rev=rev+n%10;
		n=n/10;
	}
	printf("Reversed number is %d",rev);
getch();
}