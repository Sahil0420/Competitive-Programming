#include<iostream>
//#include<bits/stdc++.h>
using namespace std;

class Sort{
public:
	void selectionSort(int arr[] , int n ){

		for(int i=1;i<n;i++){
			int j=i-1;
			int target = arr[i];
			while(j>=0 and arr[j]>target){
				arr[j+1]=arr[j];
				j--;
			}
			arr[j+1] = target;
		}

		for(int i=0;i<n;i++){
			cout<<arr[i]<<" ";
		}
	}
};


int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt" , "r" , stdin);
		freopen("output.txt" , "w" , stdout);
	#endif

	char end = '\n';
	
	int n ;cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];

	Sort abc;
	abc.selectionSort(arr , n );

	return 0;
}