//now on the transpose of matrix...
#include<stdio.h>
#include<conio.h>
void main(){
	int m,n,i,j,a[10][10],trans[10][10];
	printf("\nPLease enter the matrix the number of rows and columns");
	scanf("%d%d",&m,&n);
	printf("\n Now enter the values of the matrix\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("Enter [%d][%d]\n",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			trans[i][j]=a[j][i];
		}
	}
	printf("\n Now the transposed values are\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf(" %d ",trans[i][j]);
		}
		printf("\n");
	}
	getch();
}