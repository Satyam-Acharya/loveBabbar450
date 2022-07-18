#include <iostream>
using namespace std;

void lSumSubArray(int arr[],int n){
	int currMax=0;
	int max=0;
	
	for(int i=0;i<n;i++){
		currMax+=arr[i];
		if(currMax > max){
			max=currMax;
		}
		if(currMax<0){
			currMax=0;
		}
	}
	
	cout<<"Maximum sum subarray: "<<max;
}

int main(){
	int n;
	cin>>n;
	
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	lSumSubArray(arr,n);
}
