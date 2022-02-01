#include<iostream>
#include<unordered_map>
//#include<bits/stdc++.h>
using namespace std;

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	
	int arr[6]={1,2,2,3,3,4};

	unordered_map<int , bool> visited;

	for(int i=0;i<6;i++){

		int count=0;

		if (not(visited[arr[i]])){

			visited[arr[i]] = true;

			for(int j=0;j<6;j++){

				if(arr[j] == arr[i])
					count++;
			}
			cout<<"Frequency of "<<arr[i]<<" = "<<count<<"\n";
		}else{
			continue;
		}
	}

	cout<<"\n";

	for( auto u : visited){
		cout<<u.first<<" "<<u.second<<"\n";
	}

	return 0;
}
