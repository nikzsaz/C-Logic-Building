#include<stdio.h>
#include<conio.h>
void main(){
	enum Tv{news=2,cnbc=5,bbc=4,sony=13};
	printf("\nHere is the list of the favourite channels");
	printf("\nNews: %d",news);
	printf("\nCnbc: %d",cnbc);
	printf("\nBbc: %d",bbc);
	printf("\nSony: %d",sony);
	getch();
}
