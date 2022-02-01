// #include<iostream>
// #include<unordered_map>
// // #include<bits/stdc++.h>
// using namespace std;

// int solve2(unordered_map<int ,int > arr ,int n){
// 	int mcount=0;
// 	for(auto i : arr){
// 		mcount = max(mcount , i.second);
// 	}
// 	return (abs(mcount - n));
// }


// int main(){

// 	#ifndef ONLINE_JUDGE
// 		freopen("input.txt" , "r" , stdin);
// 		freopen("output.txt" , "w" , stdout);
// 	#endif

// 	//code goes here
// 	int tc;cin>>tc;
// 	while(tc--){
// 		int n;cin>>n;
// 		unordered_map<int,int>  arr;
// 		for(int i=0;i<n;i++){
// 			int a;cin>>a;
// 			arr[a]++;
// 		}
// 		cout<<solve2(arr , n)<<"\n";
// 	}

// return 0;
// }

#include<iostream>
// #include<bits/stdc++.h>
#include<vector>
using namespace std;

void solve(vector<int> &arr){
	for(int i=0;i<arr.size();i++){
		if(arr[i]%2!=0){
			continue;
		}
		else{
			float temp = arr[i]/2;
			if(arr[i] == (temp + temp)){
				arr.push_back(arr[i]/2);
				arr[i] = arr[i]/2;
			}
		}
	}
}

int solve2(vector<int> &arr){
	int n  = arr.size();
	// cout<<"SIZE == "<<arr.size()<<endl;
	solve(arr);
	int m = arr.size();
	// cout<<"SIZE == "<<arr.size()<<endl;
	return (abs(n - m));
}

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt" , "r" , stdin);
		freopen("output.txt" , "w" , stdout);
	#endif

	int tc;cin>>tc;
	while(tc--){
		int n;
		cin>>n;
		vector<int> arr;
		for(int i=0;i<n;i++){
			int a;cin>>a;
			arr.push_back(a);
		}
		cout<<solve2(arr)<<"\n";
	}
return 0;
}