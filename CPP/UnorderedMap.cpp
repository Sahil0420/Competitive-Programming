#include<iostream>
#include<unordered_map>
using namespace std;

int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	unordered_map<string,int> m;
	int n;cin>>n; //number of cases
	for(int i=0;i<n;i++){
		string s;cin>>s;
		m[s]++;
	}

	for(auto i : m)
		cout<<i.first<<" = "<<i.second<<endl;		
	return 0;
}