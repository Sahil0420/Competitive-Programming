#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int t;cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		multiset<long long > bags;
		for(int i=0;i<n;i++){
			int candy_ct;
			cin>>candy_ct;
			bags.insert(candy_ct);
		}
		long long total_candies=0;
		for(int i=0;i<k;++i){
			auto last_iter = (--bags.end());
			int candy_count = *last_iter;
			total_candies+=candy_count;
			bags.erase(last_iter);
			bags.insert(candy_count/2);
		}
		cout<<total_candies<<endl;
	}
	return 0;
}