#include <bits/stdc++.h>
using namespace std;

void maxMinNum(int arr[],int n){
	if(n==0){
		cout<<"Max & Min: "<<arr[0]<<endl;
	}
	else{
		int max,min;
		if(arr[1]>arr[0]){
			max = arr[1];
			min = arr[0];
			
			
		}else{
			max = arr[0];
			min = arr[1];
		}
		for(int i=2;i<n;i++){
				if(arr[i]>max){
					max=arr[i];
				}
				else if(arr[i]<min){
					min = arr[i];
				}
		}
		cout<<"Max: "<<max<<endl;
		cout<<"Min: "<<min<<endl;
			
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
	
	maxMinNum(arr,n);
	
	return 0;
}
