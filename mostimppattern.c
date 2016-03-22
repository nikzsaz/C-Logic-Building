#include<stdio.h>
#include<conio.h>
void main(){
	int n,i,j;
	char a,b;
	char z='E';
	char z1='D';
	printf("\n Enter the no of lines");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<i;j++){
			printf(" ");
		}
		for(a='A';a<=z;a++)
		{
			printf("%c",a);
		}
		for(b=z1;b>='A';b--){
			printf("%c",b);
		}
		z--;
		z1--;
		printf("\n");
	}
		getch();
	}