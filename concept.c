#include<stdio.h>
#include<conio.h>
void main(){
	int num,sum=0,flag=1,count=0;
	float avg;
	/*while(flag==1){
		printf("\n Enter any number. Enter 999 to stop");
		scanf("%d",&num);
		if(num==0)
			continue;
		if(num!=999){
			sum+=num;
			count++;
		}
		else
	}*/
	while(flag==1){
		printf("\n Enter any number. Enter 999 to stop");
		scanf("%d",&num);
		if(num<0)
			continue;
		if(num!=999){
			sum+=num;
			count++;
		}
		else
			flag=0;
	}
	printf("\n Sum = %d ",sum);
getch();
}