#include <bits/stdc++.h>
using namespace std;

void kmaxmin(int arr[],int n,int k){
	sort(arr,arr+n);
	cout<<"\nKth min: "<<arr[k-1];
	cout<<"\nKth max: "<<arr[n-k];
}

void printArray(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}

int main(){
	
	int n;
	cout<<"Enter size of array: ";
	cin>>n;
	
	cout<<"\nEnter elements: ";
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int k;
	cout<<"\nEnter K: ";
	cin>>k;
	
	kmaxmin(arr,n, k);
	
	return 0;
}
