//how to handle union
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

void main(){
	/*int (*a)[3];
	a=(int (*)[3])malloc(sizeof(*a));
	printf("%d",sizeof(a));
	getch();*/
	
	//program 2

	/*char *ptr;
	ptr=(char*)malloc(sizeof(20));
	strcpy(ptr,"Niraj");
	printf("\n%s",ptr);*/

	//program 3

	 int i, j;
    int(*p)[3];
    p = (int(*)[3])malloc(3*sizeof(*p));
	printf("\n Please enter the numbers");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++)
			scanf("\n%d",&p[i][j]);
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++)
			printf("\n%d",p[i][j]);
	}
	getch();

	getch();
}