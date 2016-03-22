//lets start by doing the insertion sort...
#include<stdio.h>
#include<conio.h>
#include<climits>
void main(){
	int a[20],n,i,j,key;
	printf("\n Please Enter the number of elements\n");
	scanf("%d",&n);
	printf("\n Now input the values");
	for(i=0;i<n;i++){
		printf("\n [%d] ",i);
		scanf("%d",&a[i]);
	}
	for(j=1;j<n;j++){
		key=a[j];
		i=j-1;
		while(i>=0&&a[i]>key){
			a[i+1]=a[i];
			i=i-1;
		}
		a[i+1]=key;
	}
	printf("\n Here is your sorted array");
	for(i=0;i<n;i++)
		printf("\n %d",a[i]);
	getch();
}

