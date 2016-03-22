//Already studied the 3 types of sorting so need to understand linear and binary search
#include<stdio.h>
#include<conio.h>
#include<climits>
void main(){
	int array[100],n,i,search;
	printf("\n Please enter the number of elements\n");
	scanf("%d",&n);
	printf("\n Now insert the values in the array\n");
	for(i=0;i<n;i++){
		printf("\n [%d] ",i);
		scanf("%d",&array[i]);
	}
	printf("\n Now Enter the number you want to search");
	scanf("%d",&search);
	for(i=0;i<n;i++){
		if(array[i]==search){
			printf("\n Element is found at index %d :)",i+1);
			break;
		}
	}
	if(i==n)
		printf("\n Number is not found in the index :(");
	getch();
}


	                                                                  