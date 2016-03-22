#include<Stdio.h>
#include<conio.h>
void main(){
	int r1,c1,r2,c2,a[10][10],b[10][10],mult[10][10],i,j,k;
	printf("\nPLease enter the rows and columns of first matrix\n");
	scanf("%d%d",&r1,&c1);
	printf("\nPlease enter the rows and colums of second matrix\n");
	scanf("%d%d",&r2,&c2);
	if(c1==r2){
		for(i=0;i<r1;i++){
			for(j=0;j<c1;j++){
				printf("\n Fill for first matrix [%d][%d] ",i,j);
				scanf("%d",&a[i][j]);
			}
		}
		for(i=0;i<r1;i++){
			for(j=0;j<c1;j++){
				printf("\n Fill for the second matrix [%d][%d] ",i,j);
				scanf("%d",&b[i][j]);
			}
		}
		//here your main logic starts.....
		printf("\n Here you get the multiplied matrix\n");
		for(i=0;i<r1;i++){
			for(j=0;j<c2;j++){
				mult[i][j]=0;
				for(k=0;k<r1;k++)
					mult[i][j]+=a[i][k]*a[k][j];
				printf(" %d ",mult[i][j]);
			}
			printf("\n");
		}
	}
	else
		printf("\nPlease read the rules for matrix multiplication\n");
	getch();
}
