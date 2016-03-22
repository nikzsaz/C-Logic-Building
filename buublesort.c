#include<stdio.h>
#include<conio.h>
#include<climits>
long BubbleSort(long[],long);
void main(){
	long a[100],n,c;
	printf("\n How many elements you want to enter");
	scanf("%ld",&n);
	printf("\n Now PLaese Enter the values\n");
	for(c=0;c<n;c++){
		printf("\n Enter [%d] ",c);
		scanf("%d",&a[c]);
	}
	BubbleSort(a,n);
	printf("\n Now the sorted elements are\n");
	for(c=0;c<n;c++){
		printf("\n%d",a[c]);
	}
	getch();
}
long BubbleSort(int a[100],int n){
	int i,j,temp;
	for(i=0;i<(n-1);i++){
		for(j=0;j<(n-i-1);j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}

