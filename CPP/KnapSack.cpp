#include <bits/stdc++.h>
using namespace std;

int wt[1000];
int val[1000];
long dp[100][1000];

int func(int idx,int wt_left){
	if (wt_left <= 0) return 0;
	if (idx < 0) return 0;
	if(dp[idx][wt_left]!=-1) return dp[idx][wt_left];
	int ans = func(idx-1,wt_left);
	if(wt_left - wt[idx] > 0){
		ans = max(ans,func(idx-1,wt_left-wt[idx])+val[idx]);
	}
	return ans;
}

int main(int argc, char const *argv[])
{

	memset(dp,-1,sizeof(dp));

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

	int n,m;
	cin>>n>>m;

	for(int i=0;i<n;i++)
		cin>>val[i];

	for (int i=0;i<n;i++)
		cin>>wt[i];


	cout<<"Weight\t\tValue";
	for (int i=0;i<n;i++)
		cout<<"\n"<<wt[i]<<"\t\t\t"<<val[i];
	cout<<"\n";

	int max_profit = func(n-1,m);
	cout<<"MAXIMUM PROFIT : "<<max_profit;

	return 0;
}

/*
58
41

57 95 13 29 1 99 34 77 61 23 24 70 73 88 33 61 43 5 41
63 8 67 20 72 98 59 46 58 64 94 97 70 46 81 42 7 1 52 
20 54 81 3 73 78 81 11 41 45 18 94 24 82 9 19 59 48 2 72

83 84 85 76 13 87 2 23 33 82 79 100 88 85 91 78 83 44 4
50 11 68 90 88 73 83 46 16 7 35 76 31 40 49 65 2 18 47 55 
38 75 58 86 77 96 94 82 92 10 86 54 49 65 44 77 22 81 52
*/

/*88
71
81 28 91 49 65 97 19 75 21 88 47 10 26 67 9 39 27 85 72 
64 24 14 87 7 94 100 53 1 83 71 11 87 67 39 73 49 51 44 
36 60 57 97 47 2 100 77 77 35 30 42 23 18 43 10 23 52 11 
80 44 8 27 90 90 93 40 96 28 60 69 34 40 13 54 74 7 82 81 
20 82 5 43 69 24 55 26 49 53 98

30 12 58 32 38 59 6 4 5 8 53 17 4 75 23 41 5 39 31 60 100
60 92 12 37 82 15 47 78 74 6 86 86 35 65 69 87 89 12 97 
28 33 100 33 46 47 17 80 60 23 10 49 1 62 7 77 9 49 52
41 82 95 83 79 16 11 16 54 22 96 90 3 7 80 1 56 37 23 85 
59 38 45 26 76 4 52 98 75
*/