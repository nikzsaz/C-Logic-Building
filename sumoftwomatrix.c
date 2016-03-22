//program that computes the sum of two matrix
#include<stdio.h>
#include<conio.h>
void main(){
	int a[10][10],b[10][10],sum[10][10]={0};
	int i,j,m,n,m1,n1;
	printf("\nEnter the rows and columns of the matrix 1\n");
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("\n[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nEnter the rows and columns of the matrix 2\n");
	scanf("%d%d",&m1,&n1);
	if(m!=m1 || n!=n1){
		printf("\nSorry addition is not possible\n");
	}
	else{
	for(i=0;i<m1;i++){
		for(j=0;j<n1;j++){
			printf("\n[%d][%d]",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	
	for(i=0;i<m;i++){
		for(j=0;j<n;j++)
			sum[i][j]=a[i][j]+b[i][j];
	}
	printf("\n Now the sumed matrix is \n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("\t%d",sum[i][j]);
		}
		printf("\n");
	}
	}

	getch();
	}

