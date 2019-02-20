#include<iostream>
#include<algorithm>
#include<stdlib.h>
#include<cstdlib>
using namespace std;

int sol(int *arr,int n,int k){
	int cnt[100000];
	for(int i=0;i<100000;i++)
		cnt[i]=0;
	
	for(int i=0;i<n;i++)
		cnt[arr[i]]++;
		
	for(int i=0;i<n;i++){				//o(n)
		if(cnt[abs(arr[i]-k)])
			return 1;
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
