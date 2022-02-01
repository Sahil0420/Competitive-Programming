#include<iostream>
//#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
	int reverseNumber( int n ){
		int rev=0;
		while(n!=0){
			int rem = n%10;
			rev = rev*10 + rem;
			n/=10;
		}
		return rev;
	}

	bool isPalindrome(int n ){
		if(n==reverseNumber(n))
			return true;
		return false;
	}

	void printPalindrome(){
		int n;cin>>n;
		for(int i=1;i<=n;i++){
			if(isPalindrome(i))
				cout<<i<<" ";
		}
	}

};

class ArmStrong{
	int cube(int n ){
		return (n*n*n);
	}

	long sumOfnumber(int n ){
		long sum = 0;
		while(n!=0){
			int rem = n%10;
			sum +=cube(rem);
			n/=10;
		}
		return sum;
	}

	bool isArmstrong(int n){
		if(n == sumOfnumber(n))
			return true;
		return false;
	}

public:
	void printArmstrong(){
		int n;cin>>n;
		for(int i=1;i<=n;i++){
			if(isArmstrong(i))
				cout<<i<<" ";
		}
	}

};



int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt" , "r" , stdin);
		freopen("output.txt" , "w" , stdout);
	#endif

	//code goes here
	Solution obj;
	obj.printPalindrome();
	cout<<"\n\n\n";
	ArmStrong abc;
	abc.printArmstrong();
return 0;
}