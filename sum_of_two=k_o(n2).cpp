#include<iostream>
#include<algorithm>
#include<stdlib.h>
using namespace std;

int sol(int *arr,int n,int k){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if((arr[i]+arr[j])==k)
				return 1;
		}
	}
	return 0;
}

void slove(){
	int n,k;
	cin>>n;
		
	int *arr=(int*)malloc(sizeof(int)*n);	
		
		for(int i=0;i<n;i++)
			cin>>arr[i];
	cin>>k;
	
	if(sol(arr,n,k))
		cout<<"yes";
	else
		cout<<"no";
}

int main(){
	int t;
	cin>>t;
	
	while(t--)
		slove();
	
	return 0;
}
