#include<iostream>
#include<algorithm>
#include<stdlib.h>
using namespace std;

int sol(int *arr,int n,int k){
	int p=0,q=(n-1);
	sort(arr,arr+n);	//o(nlongn)
	
	while(p<q){				//o(n)
		if((arr[p]+arr[q])==k)
			return 1;
		else if((arr[p]+arr[q])>k)
			q--;
		else
			p++;
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
