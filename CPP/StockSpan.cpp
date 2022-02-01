#include<iostream>
#include<stack>
//#include<bits/stdc++.h>
using namespace std;
int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	
	int n;cin>>n;
	cout<<n<<"\n";
	int *arr = new int[n];
	for (int i=0;i<n;i++){
		cin>>arr[i];
	}

	for(int i=0;i<n;i++)
		cout<<arr[i]<<"\t";
	cout<<"\n";

	int *span = new int[n];
	
	stack <int> st;
	st.push(0);
	span[0]=1;

	for(int i=1;i<n;i++){
		while(st.size() > 0 and (arr[i]>arr[st.top()])){
			st.pop();
		}
		if(st.size()==0){
			span[i] = i+1;
		}else{
			span[i] = i-st.top();
		}
		st.push(i);
	}

	for(int i=0;i<n;i++)
		cout<<span[i]<<"\t";
	cout<<endl;

	return 0;
}
