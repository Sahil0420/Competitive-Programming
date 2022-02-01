#include<iostream>
//#include<bits/stdc++.h>
using namespace std;


class Solution{
public:
	bool isPresent(int *ar , int n , int key ){
		for(int i=0;i<n;i++)
			if(ar[i]==key)
				return true;
		return false;
	}

	int getIndex(int *ar , int n , int key)
	{
		for(int i=0;i<n;i++)
			if(ar[i] == key)
				return i;
		return -1;
	}

};

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt" , "r" , stdin);
		freopen("output.txt" , "w" , stdout);
	#endif

	int n ; cin>>n;

	//statically memory allocated 
	int arr[n] = {0};
	

	for(int i=0;i<n;i++)
		cin>>arr[i];

	cout<<"For loop : ";
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<"\n";

	cout<<"For each Loop : ";
	
	for(auto++ i : arr)
		cout<<i<<" ";
	cout<<"\n";

	cout<<"USING WHILE LOOP : ";
	int i=0;
	while(i<n){
		cout<<arr[i]<<" ";
		i++;
	}

	Solution obj;
	cout<<"\nIndex of 54 in arr : "<<obj.getIndex(arr,n , 54);

	cout<<"\nis 4 present : "<<obj.isPresent(arr, n , 4);

	//dynamically memory allocated 
	int m;cin>>m;
	int *array = new int[m];
	cout<<"\nDYNAMIC ARRAY : ";

	for(int j=0;j<m;j++)
		cin>>array[j];

	for(int i=0 ; i < n ; i++ )
		cout<<array[i]<<" ";

return 0;
}