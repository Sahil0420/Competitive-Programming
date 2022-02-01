#include<iostream>
#include<cstring>
//#include<bits/stdc++.h>
using namespace std;

int wt[105],val[105];

long long dp[105][1005];

long long func(int ind , int value_left){
	if( value_left == 0 ) return 0;
	if(ind < 0 ) return 1e15;

	if(dp[ind][value_left] != -1 )
		return (dp[ind][value_left]);
	
	long long ans = func(ind-1,value_left);

	
	if(value_left-val[ind]>=0)
		ans = min( ans , func( ind -1 , value_left - val[ind]) + wt[ind] );

	return dp[ind][value_left] = ans;
}

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt" , "r" , stdin);
		freopen("output.txt" , "w" , stdout);
	#endif

	//code goes here
	memset(dp ,-1, sizeof(dp));
	int n,w;
	cin>>n>>w;
	for(int i = 0 ; i < n ; i++ ){
		cin>>wt[i]>>val[i];
	}


	//we gotta return the maximum achievable value for 
	int maxvalue = 1e5;
	for(int i=maxvalue ; i>=0;i--){
		if(func(n-1 , i) <= w){
			cout<<i<<endl;
			break;
		}
	}

return 0;
}