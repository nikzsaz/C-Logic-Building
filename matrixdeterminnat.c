//lets do the inverse
#include<stdio.h>
#include<conio.h>
#include<math.h>
float determinant(float[20][20],float);
//void cofactors(float[20][20],float);
//void trans(float[20][20],float[20][20],float);
void main(){
	float a[20][20],n,d;
	int i,j;
	printf("\nEnter the order of the matrix\n");
	scanf("%f",&n);
	printf("\n Start entering the values\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%f",&a[i][j]);
		}
	}
	d=determinant(a,n);
	printf("\n The determinant is %2f",d);
	if(d==0)
		printf("\n Matrix is not inversible\n");
	else
	//	cofactors(a,n);
	getch();
}
float determinant(float a[20][20],float k){
	float s=1,det=0,b[20][20];
	int i,j,m,n,c;
	if(k==1){
		return (a[0][0]);
	}
	else{
		det=0;
		for(c=0;c<k;c++){
			m=0;
			n=0;
			for(i=0;i<k;i++){
				for(j=0;j<k;j++){
					b[i][j]=0;
					if(i!=0&&j!=c){
						b[m][n]=a[i][j];
						if(n<(k-2))
							n++;
						else{
							n=0;
							n++;
						}
					}
				}
			}
			det=det+s*(a[0][c]*determinant(b,k-1));
			s=-1*s;
		}
	}
	return (det);
}

						




