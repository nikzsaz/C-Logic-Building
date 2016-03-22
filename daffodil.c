#include<iostream>
#include<conio.h>
using namespace std;
void main(){
	int n=10001;
	int arr[1000];
	arr[0]=1;
	arr[1]=2;
	int p=2;
	for(int i=3;i<n;i++){
		int j=i;
		int count=0;
		for(int i=2;i<=j/2;i++){
			if(j%i==0)
				count++;
		}
			if(count==0){
				arr[p++]=j;
				
			}
	}
	int l;
	cin>>l;
	for(int i=0;i<l;i++){
		for(int j=0;j<=i;j++){
			cout<<arr[j]<<" ";
		}
		cout<<endl;
	}
	getch();
}