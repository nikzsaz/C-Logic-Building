//simple program for only merging
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main(){
	int n,m,i,j=0,a[10],b[10],c[20],t;
	printf("\n Enter the number of element of array 1");
	scanf("%d",&n);
	printf("\n Please enter the elements of the array");
	for(i=0;i<n;i++){
		printf(" [%d] ",i+1);
		scanf("%d",&a[i]);
	}
	printf("\n Number of elements in array 2");
	scanf("%d",&m);
	printf("\n Please enter the elements of the array");
	for(i=0;i<n;i++){
		printf(" [%d] ",i+1);
		scanf("%d",&b[i]);
	}
	printf(" Now the merging of the arrays start");
	for(i=0;i<n;i++){
		c[j]=a[i];
		j++;
	}
	for(i=0;i<m;i++){
		c[j]=b[i];
		j++;
	}
	t=m+n;
	printf("\n Here is your merged array ...enjoy");
	for(i=0;i<t;i++){
		printf("\n %d ",c[i]);
	}
	printf("\n Here you get the reversed value");
	for(i=t-1,j=0;i>=0;i--,j++){
		printf("\n [%d] = %d",j+1,c[i]);
	}
	getch();
}