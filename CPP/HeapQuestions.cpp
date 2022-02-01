#include<iostream>
#include<queue>
//#include<bits/stdc++.h>
using namespace std;

int kthSmallest(int arr[] , int l,int r  , int k){

	priority_queue<int> pq;
	//step 1
	for(int i = 0 ; i < k ;++i){
		pq.push(arr[i]);
	}

	cout<<k<<"th Smallest Element is : ";

	// step 2 
	for(int i=k;i<r;i++){
		if(arr[i] < pq.top()){
			pq.pop();
			pq.push(arr[i]);
		}
	}
	

	return pq.top();
}

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
		
	int arr[5] = {7,4,10,20,15};
	int ans = kthSmallest(arr,0,5,4);
	cout<<ans<<'\n';


	priority_queue<int>  q ;
	for (int i=0;i<5;i++){
		q.push(arr[i]);
	}

	while(!q.empty()){
		cout<<q.top()<<" ";
		q.pop();
	}

	return 0;
}
