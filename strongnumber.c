//LEts work on the strong number 145=1!+4!+5!

#include<stdio.h>
#include<conio.h>
void main(){
	int n,save,sum=0,i,p,rem;
	printf("\nPlease Enter the number\n");
	scanf("%d",&n);
	save=n;
	while(n!=0){
		i=1,p=1;
		rem=n%10;
		while(i<=rem){
			p=p*i;
			i++;
		}
		sum=sum+p;
		n=n/10;
	}
	if(save==sum)
		printf("Given number is a strong number");
	else
		printf("Given number is not a strong number");
	getch();
}
