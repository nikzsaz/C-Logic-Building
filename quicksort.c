#include<stdio.h>
#include<conio.h>
#include<climits>
void quicksort(int [],int,int);
long partition(int [],int,int);
void main(){
	int n,i,array[100];
	printf("\n Enter the number of elements you want to enter\n");
	scanf("%d",&n);
	printf("\n Please Start entering the values\n");
	for(i=0;i<n;i++){
		printf("\n [%d] ",i);
		scanf("%d",&array[i]);
	}
	quicksort(array,0,n-1);
	printf("\n Here is your sorted array\n");
	for(i=0;i<n;i++){
		printf("\n%d",array[i]);
	}
	getch();
}
void quicksort(int a[],int l,int r){
	int j;
	if(l<r){
		j=partition(a,l,r);
		quicksort(a,l,j-1);
		quicksort(a,j+1,r);
	}
}
long partition(int a[],int l,int r){
	long pivot,i,j,t;
	pivot=a[l];
	i=l; 
	j=r+1;
	while(1){
		do ++i;	while(a[i]<pivot && i<=r);
		do --j;	while(a[j]>pivot);
		if(i>=j)
			break;
		t=a[i];
		a[i]=a[j];
		a[j]=t;
	}
	t=a[l];
	a[l]=a[j];
	a[j]=t;
	return j;
}
