//perfect number not have lot of idea but i get the concept..
#include<stdio.h>
#include<conio.h>
void main(){
	// for example 6 is 1+2+3 
	int n,i=1,sum=0;
	printf("Please Enter the number\n");
	scanf("%d",&n);
	while(i<n){
		if(n%i==0)
			sum=sum+i;
		i++;
	}
	if(sum==n)
		printf("Entered number is the perfect number");
	else
		printf("Entered number is not perfect");
	getch();
}
