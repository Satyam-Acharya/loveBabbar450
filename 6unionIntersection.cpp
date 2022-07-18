#include <bits/stdc++.h>
using namespace std;

void doUnion(int arr1[],int arr2[],int m,int n){
  
    // Defining set container s
    set<int> s;
    set<int>::iterator itr;
   
    // Inserting array elements in s
    for (int i = 0; i < m; i++)
      s.insert(arr1[i]);
   
    for (int i = 0; i < n; i++)
        s.insert(arr2[i]);
    cout << "Number of elements after union operation: " << s.size() << endl;
    
    cout << "The union set of both arrays is :";
    for (itr = s.begin();itr != s.end();itr++)
        cout << *itr
             << " ";
}

void intersec(int arr1[],int arr2[],int m,int n){
	int i=0,j=0;
	set<int>s;
	set<int>::iterator itr;
	while(i<m && j<n){
		if(arr1[i]<arr2[j]){
			i++;
		}else if(arr2[j]<arr1[i]){
			j++;
		}else{
			s.insert(arr1[i]);
			i++;
			j++;	
		}
	}
	cout << "\nThe Intersection set of both arrays is : ";
    for (itr = s.begin();itr != s.end();itr++)
        cout << *itr
             << " ";
}

int main(){
	int arr1[6]={1,2,3,4,5,6};
	int arr2[4]={5,6,7,8};
	
	doUnion(arr1,arr2,6,4);
	intersec(arr1,arr2,6,4);
	
}
