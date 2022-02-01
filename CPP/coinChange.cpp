#include<iostream>
//#include<bits/stdc++.h>
#include<vector>
#include<climits>
#include<cstring>
using namespace std;

#define N 100
int dp [10000];

void coinChnageHR(){
	int n;cin>>n;
	int arr[n];

	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	int amount =0;cin>>amount;

	int dp[amount+1] = {0};

	dp[0] = 1;

	for(int i = 0 ; i < n; i++){
		for(int j = arr[i]; j<(amount+1) ; j++){
		dp[j] += dp[j - arr[i]];			
		}
	}

	cout<< dp[amount]<<endl;
}


class leetCode{
	int solveCoinOne( int amount , vector<int>&coins){
		if(amount <= 0) return 0;
		if(dp[amount] != -1 ) return dp[amount];
		int ans = INT_MAX;
		for(int coin  : coins){
			if(amount - coin >= 0 )
				ans = min (ans+0LL,solveCoinOne((amount - coin) , coins)+1LL);
		}
		return dp[amount] = ans;
	}

public:
	void coinChangeOne(){
		memset(dp , -1 , sizeof(dp));
		int n;cin>>n;
		vector<int> coins(n);
		for(int i = 0 ; i<n ; i++){
			cin>>coins[i];
		}
		int amt = 0; cin>>amt;
		int ans = solveCoinOne(amt , coins);
		cout<<"minimum number of coins required to pay the amount ("<<amt<<") = "<< ans;
	}
};



int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt" , "r" , stdin);
		freopen("output.txt" , "w" , stdout);
	#endif

	//code goes here
	coinChnageHR();

	leetCode obj;
	obj.coinChangeOne();

return 0;
}
