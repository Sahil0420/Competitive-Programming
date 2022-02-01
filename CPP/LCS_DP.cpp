#include<iostream>
#include<cstring>
// #include<bits/stdc++.h>
using namespace std;
const int N=100;
int DP[N][N];

int LCSutil(int m , int n , string a , string b){
	if(m==0 or n==0)
		return 0;

	if (DP[n][m]!=-1)
		return DP[m][n];

	if(a[m-1]==b[n-1]){
		DP[n][m] = LCSutil(m-1,n-1,a,b)+1;
		return DP[n][m];
	}
	else{
		DP[n][m]= max(LCSutil(m-1,n,a,b),LCSutil(m,n-1,a,b));
		return DP[n][m];
	}
}

int LCS(string a , string b){
	int m=a.length();
	int n=b.length();
	return LCSutil(m,n,a,b);
}

int main(){
	memset(DP,-1,sizeof(DP));
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

	string a , b;
	cin>>a>>b;
	cout<<a<<" "<<b<<"\n";

	cout<<LCS(a,b);

	return 0;
}
;