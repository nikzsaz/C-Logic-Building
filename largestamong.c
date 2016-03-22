#include<stdio.h>
#include<conio.h>
void main(){
	
	int max(int a[],int n);
	int n,a[20],i;
	printf("Enter the total digit of input");
	scanf("%d",&n);
	printf("\nEnter the number");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("\n The maximum number is %d",max(a,n));
	getch();
}
	int max(int a[],int n){
		int i,maxi=0;
		for(i=0;i<n;i++){
			if(a[i]>maxi){
				maxi=a[i];
			}
		}
		return maxi;
	}
