#include <bits/stdc++.h>
using namespace std;

void sortneg(int arr[],int n){
	int i=0;
	int j=0;
	
	while(j<n){
		if(arr[j]>0){
			j++;
		}
		else{
			swap(arr[j],arr[i]);
			i++;
			j++;
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
	
	sortneg(arr,n);
	printArray(arr,n);
	
	return 0;
}
