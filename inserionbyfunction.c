#include<stdio.h>
#include<conio.h>
#include<climits>
long InsertionSort(long [],long);
void main(){
	long n,i,a[100];
	printf("\n Please Enter the number of elements\n");
	scanf("%ld",&n);
	printf("\n Now start intering your values\n");
	for(i=0;i<n;i++){
		printf("\n [%d] ",i);
		scanf("%d",&a[i]);
	}
	InsertionSort(a,n);
	printf("\n Now the sorted elements are\n");
	for(i=0;i<n;i++){
		printf("\n %d",a[i]);
	}
	getch();
}
long InsertionSort(long a[100],long n){
	long j,key,i;
	for(j=1;j<n;j++){
		key=a[j];
		i=j-1;
		while(i>=0&&a[i]>key){
			a[i+1]=a[i];
			i=i-1;
		}
		a[i+1]=key;
	}
}