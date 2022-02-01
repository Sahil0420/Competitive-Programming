#include<iostream>
#include<vector>
//#include<bits/stdc++.h>
using namespace std;

class Solution{
	
public:
	void BubbleSort(int arr[] , int n){
		cout<<"BUBBLE_SORT : ";
		for(int step=0 ; step<n-1 ; step++){
			for(int i=0 ; i<n-step-1; i++){
				if(arr[i] > arr[i+1]){
					int temp = arr[i];
					arr[i] = arr[i+1];
					arr[i+1] = temp;
				}
			}	
		}
	}

	void SelectionSort(int arr[] , int n ){
		cout<<"SELECTION SORT : ";
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				if(arr[j]<arr[i]){
					int temp = arr[j];
					arr[j] = arr[i];
					arr[i] = temp;
				}
			}
		}
	}

	void insertionSort(int arr[] , int n){
		cout<<"INSERTION_SORT : ";
		for(int i=0;i<n;i++){
			int key = arr[i];
			int j=i-1;

			while(j>=0 and key < arr[j]){
				arr[j+1] = arr[j];
				j--;
			}
			arr[j+1] = key;
		}
	}

	void mergeSort(vector<int> &arr){
		int n = arr.size();
		if(n>1){
			int mid = n/2;

			vector<int> left;
			vector<int> right;

			for(int i=0;i<mid;i++)
				left.push_back(arr[i]);

			for(int i=mid;i<n;i++)
				right.push_back(arr[i]);

			this->mergeSort(left);
			this->mergeSort(right);

			int i=0,j=0,k=0;
			while(i<left.size() and j<right.size()){
				if(left[i]<right[j]){
					arr[k]=left[i];
					i++;
				}
				else{
					arr[k] = right[j];
					j++;
				}
				k++;
			}

			while( i<left.size()){
				arr[k] = left[i];
				k++;i++;
			}

			while(j<right.size()){
				arr[k] = right[j];
				k++;j++;
			}
		}
	}	
};

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt" , "r" , stdin);
		freopen("output.txt" , "w" , stdout);
	#endif

	//code goes here
	int n;cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];

	Solution obj;
	obj.BubbleSort(arr, n);
	for(auto i : arr)
		cout<<i<<" ";
	cout<<endl;

	cin>>n;
	int arr1[n];
	for(int i=0;i<n;i++){
		cin>>arr1[i];
	}

	// obj.SelectionSort(arr1, n);
	for(auto i : arr1)
		cout<<i<<" ";
	cout<<endl;

	// obj.insertionSort(arr1,n);
	int m;cin>>m;
	vector<int> array(m);
	for(int i=0;i<m;i++)
		cin>>array[i];

	for(int i=0;i<m;i++){
		cout<<array[i]<<" ";
	}
	cout<<"MERGESORT : ";
	obj.mergeSort(array);

	for(int i=0;i<m;i++){
		cout<<array[i]<<" ";
	}

return 0;
}