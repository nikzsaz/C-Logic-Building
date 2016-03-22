#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main(){
	int n,a[20],i;
	int max,min,ex1,ex2,temp;

	printf("\n Enter the number of elements ");
	scanf("%d",&n);
	printf("\n Now please enter the elements ");
	for(i=0;i<n;i++){
		printf("\n [%d] ",i+1);
		scanf("%d",&a[i]);
	}
	printf("\n Here you got the inserted array");
	for(i=0;i<n;i++){
		printf("\n %d ",a[i]);
	}
	max=a[0];
	min=a[0];
	for(i=0;i<n;i++){
		if(max<a[i]){
			max=a[i];
			ex1=i;
		}
		if(min>a[i]){
			min=a[i];
			ex2=i;
		}
	}
	temp=a[ex1];
	a[ex1]=a[ex2];
	a[ex2]=temp;
	printf("\n Now the exchanged max and min array values are ");\
		for(i=0;i<n;i++){
			printf("\n %d ",a[i]);
		}
		getch();
}