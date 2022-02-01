#include<iostream>
#include<vector>
//#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> arr, int key){
	if (arr[0] == key )
		return 0;
	int low = 1 , hi = arr.size()-1;
	while(true){
		int mid = (low+hi)/2;
		if (arr[mid]==key)
			return mid;
		if (arr[mid] < key){
			cout<<"too small ";
			low = mid+1;
		}else if (arr[mid]>key){
			cout<<"too high ";
			hi = mid-1;
		}
	}
	return 0;
}

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	
	vector<int> arr ;
	for(int i = 0 ; i < 2000 ;i+=2)
		arr.push_back(i);

	for(auto i : arr)
		cout<<i<<" ";

	cout<<"\nPresent at index : "<<binarySearch(arr,234);
	return 0;
}
