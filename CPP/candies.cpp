#include<iostream>
// #include<bits/stdc++.h>
#include<vector>
using namespace std;

long candies(vector<int> arr ,int n ){
	vector<int> ans;
	
	int last=0;
	for(int i=1;i<n;i++){
		if(arr[i] > arr[i-1]){
			last++;
			ans>push_back(last+1);
		}else{
			last=0;

		}
	}
}

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt" , "r" , stdin);
		freopen("output.txt" , "w" , stdout);
	#endif

	//code goes here
	int tc;cin>>tc;
	while(tc--){
		int n;cin>>n;
		vector<int> arr;
		for(int i=0;i<n;i++){
			int a;cin>>a;
			arr.push_back(a);
		}
		cout<<"NUMBER OF CANDIES REQUIRED : "<<candies(arr,n)<<endl;
	} 

return 0;
}


/*
3
1
2
2

ans 4
*/