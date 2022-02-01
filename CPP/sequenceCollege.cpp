#include<iostream>
//#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
	int fact(int n ){
		int fact=n;
		for(int i=1;i<n;i--)
			fact*=i;
		return fact;
	}

	void first(){
		bool pos = false;
		int n;cin>>n;
		int i=2;
		long sum=1;
		while(i<=n){
			if(pos){
				pos = false;
				sum+= i;
			}else{
				pos = true;
				sum-=i;
			}
			i++;
		}
		cout<<sum<<"\n";
	}

	void second(){
		int n ; cin>>n;
		long sum=0;
		for(int i=1;i<=n;i+=2)
			sum+=i;
		cout<<sum<<"\n";
	}


	void third(){
		int n;cin>>n;
		long sum = 1;
		bool flag = true;
		int start = 2;
		while(start<=n){
			if(flag){
				sum-=start;
				flag = false;
			}else{
				-sum+=start;
				flag = true;
			}
			start+=2;
		}
		cout<<sum<<endl;
	}

	int sq(int n ){
		return n*n;
	}

	void fourth(){
		int n ;cin>>n;
		long sum=0;
		int start=1;
		while(start<=n){
			sum+=sq(start);
			start++;
		}
		cout<<sum<<endl;
	}

	void five(){
		int n ;
		cin>>n;
		double ans=0;
		double z=1;
		bool flag= true;
		while(z<=n){
			if(flag){
				flag = false;
				ans+=z/fact(z);
			}else{
				flag = true;
				ans-=z/fact(z);
			}
			z++;
		}
		cout<<ans<<"\n";
	}


};

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt" , "r" , stdin);
		freopen("output.txt" , "w" , stdout);
	#endif

	//code goes here
	Solution obj;
	obj.first();
	obj.second();
	obj.third();
	obj.fourth();
	obj.five();

return 0;
}