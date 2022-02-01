#include<iostream>
// #include<bits/stdc++.h>

using namespace std;

int fact(int a ){
	if(a==1 or a==0)
		return 1;
	return(a*fact(a-1));
}

int fibbo(int n ){
	if(n==0||n==1)
		return n;
	else
		return (fibbo(n-1) + fibbo(n-2));

}

int gcd(int a , int b){
	if(a==b) return a;
	if(a==0) return b;
	if(b==0) return a;
	if(a>b)  return (gcd(b,a-b));
	return (gcd(a,b-a));
}

int hcf(int a , int b){
	if(b==0)
		return a;
	return(hcf(b , a%b));	
}

int hcf2(int n1 , int n2){
	int gcd=0;
	for(int i=2;i<= n1 && i<=n2 ; i++){
		if(n1%i==0 && n2%i==0)
			gcd = i;
	}
	return gcd;
}

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt" , "r" , stdin);
		freopen("output.txt" , "w" , stdout);
	#endif

	//code goes here
	int n;cin>>n;
	cout<<fact(n)<<endl;

	for(int i=0;i<n;i++)
		cout<<fibbo(i)<<" ";

	cout<<"GCD = " <<gcd(45,9);
	cout<<endl;
	cout<<"HCF = "<<hcf(45,90)<<endl;
	cout<<"HCF = "<<hcf2(45,9)<<endl;


return 0;
}