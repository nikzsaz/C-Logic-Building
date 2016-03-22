//implementing the binary search..
//remember you have to provide the sorted array always else it wont gonna work..
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main(){
	int arr[10],num,i,n,pos=-1,beg,end,found=0,mid;
	printf("\n PLease enter the number of elements");
	scanf("%d",&n);
	printf("\n Enter the elements");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("\n Enter the element that is to be searched");
	scanf("%d",&num);
	beg=0;
	end=n-1;
	while(beg<=end){
		mid=(beg+end)/2;
		if(arr[mid]==num){
			printf("\n %d is present in the array at the position = %d ",num,mid+1);
			found=1;
			break;
		}
		else if(arr[mid]>num)
			end=mid-1;
		else//(arr[mid]<mid)
			beg=mid+1;
	}
	if(beg>end&&found==0)
		printf("\n Sorry that element is not present in the array");
	getch();
}