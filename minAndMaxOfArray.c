//to find the maximum and the minimum in the array...
#include<stdio.h>
#include<conio.h>
void main(){
	int n,a[10],i,min,max;
	printf("\nEnter the number of element you want to insert");
	scanf("%d",&n);
	printf("\n Please enter the values");
	for(i=0;i<n;i++){
		scanf("%d\n",&a[i]);
	}
	min=a[0];
	max=a[0];
	for(i=0;i<n;i++){
		if(a[i]<min){
			min=a[i];
		}
	}
	for(i=0;i<n;i++){
		if(a[i]>max){
			max=a[i];
		}
	}
	printf("\n The min value is %d and the max value is %d",min,max);
	getch();
}

