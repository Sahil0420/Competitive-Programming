#include"bits/stdc++.h"
using namespace std;

const int N = 1e7+10;

vector<bool> isPrime(N,1);

int main(int argc, char const *argv[])
{
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	
	isPrime[0] = isPrime[1]=false;
	for(int i=2;i<N;++i){
		if(isPrime[i] == true){
			for(int j = 2*i;j<N;j+=i)
				isPrime[j]=false;
		}
	}

	int q;cin>>q;
	while(q-->1){
		int el;cin>>el;
		if(isPrime[el]){
			cout<<el<<"\t:\tPrime\n";
		}else{
			cout<<el<<"\t:\tNot Prime\n";
		}
	}



	return 0;
}