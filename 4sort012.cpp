#include <bits/stdc++.h>
using namespace std;

void sortArr(int arr[],int n){
	int i=0;
	int j=0;
	int k = n-1;
	
	while(j<=k){
		if(arr[j]==0){
			swap(arr[i],arr[j]);
			i++;
			j++;
		}else if(arr[1]==1){
			j++;
		}else{
			swap(arr[k],arr[j]);
			j++;
			k--;
		}
	}
}

void printArray(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}

int main(){
	
	int n;
	cin>>n;
	
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	sortArr(arr,n);
	printArray(arr,n);
	
	return 0;
}
