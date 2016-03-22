#include<stdio.h>
#include<string.h>
#include<conio.h>
void mymemCopy(void *dest,void *src,size_t n){
	char *csrc=(char*)src;
	char *cdest=(char*)dest;
	//Create a temprory array to hold data of src
	char *temp=new char[n];
	for(int i=0;i<n;i++)
		temp[i]=csrc[i];
	for(int i=0;i<n;i++)
		cdest[i]=temp[i];
}
void main(){
	char csrc[]="Niraj is doing so good and learning all the way";
	char cdst[100];
	mymemCopy(cdst,csrc,strlen(csrc)+1);
	printf("Copied string is %s",cdst);
	int isrc[]={10,23,65,234,56,34,65,345,56,576,56,45};
	int n=sizeof(isrc)/sizeof(isrc[0]);
	int dest[100],i;
	mymemCopy(dest,isrc,sizeof(isrc));
	printf("\n Now the copied array is ");
	for(i=0;i<n;i++)
		printf(" %d ,",dest[i]);
	getch();
}
