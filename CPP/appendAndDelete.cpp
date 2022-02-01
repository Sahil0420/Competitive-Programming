#include<iostream>
#include<cstring>
// #include<bits/stdc++.h>
using namespace std;

void appendAndDelete(string s , string t , int k ){
	if(s==t) cout<<"YES";
	 int i =0;
	 while(i < s.size() and i<t.size()){
	 	if(s[i] == t[i]){
	 		continue;
	 	}
	 	else{
	 		break;
	 	}
	 	i++;
	 }
	 
	 int lens = s.size(),lent = t.size();
	 lens = lens-i;
	 lent = lent -i;

	 if(lens+lent<=k)
	 	cout<<"YES";
	 else
	 	cout<<"NO";
}

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt" , "r" , stdin);
		freopen("output.txt" , "w" , stdout);
	#endif

	//code goes here

int tc;cin>>tc;
while(tc--){
	string a;cin>>a;
	string b;cin>>b;
	int k;cin>>k;

	appendAndDelete(a,b,k);

}	

return 0;
}