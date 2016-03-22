#include<stdio.h>
#include<conio.h>
#include<climits>
void mergesort(int [],int,int);
void merge(int [],int,int);
void main(){
	int n,i,a[100];
	printf("\n PLease Enter the number of elements\n");
	scanf("%d",&n);
	printf("\n Now lets start entering the values\n");
	for(i=0;i<n;i++){
		printf("\n [%d] ",i);
		scanf("%d",&a[i]);
	}
	mergesort(a,0,n-1);
	printf("\n Now the sorted array is \n");
	for(i=0;i<n;i++){
		printf("\n %d ",a[i]);
	}
	getch();
}
void mergesort(int a[],int l,int r){
	if(l<r){
		int m=(l+r-1)/2;
		//same qas l+r/2 but avoids overflow for laerge l 
		mergesort(a,l,m);
		mergesort(a,m+1,r);
		merge(a,l,m,r);
	}
}
void merge(int a[],int l,int m,int r){
	int i,j,k;
	int n1=m-l+1;
	int n2=r-m;
	int L[50],R[50];
	for(i=0;i<n1;i++)
		L[i]=a[l+i];
	for(j=0;j<n2;j++)
		R[j]=a[m+1+j];
	i=0;
	j=0;
	k=l;
	while(i<n1&&j<n2){
		if(L[i]<=R[j]){
			a[k]=L[i];
			i++;
		}
		else{
			a[k]=R[j];
			j++;
		}
		k++;
	}
	while(i<n1){
		a[k]=L[i];
		i++;
		k++;
	}
	while(j<n2){
		a[k]=R[j];
		j++;
		k++;
	}
}
			

