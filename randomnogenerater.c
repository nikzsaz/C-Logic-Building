//now to generate the random number..
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

main(){
	int n,max,num,c;
	printf("\nEnter the number of random number you want to generate");
	scanf("%d",&n);
	printf("\nEnter the maximum number of random number");
	scanf("%d",max);
	printf("\n Here comes your random number\n");
	randomize();
	for(c=1;c<=n;c++){
		num=random(max);
		printf("%d\n",num);
	}
	getch();
	return 0;
}

