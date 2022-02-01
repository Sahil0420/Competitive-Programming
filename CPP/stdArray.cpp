#include<iostream>
#include<array>
#include<algorithm>
#include<vector>
using namespace std;

bool isPrime(int n){
	if(n==1 or n==0){
		return false;
	}
	int m=2;
	while(m<=n/2){
		if(n%m==0)
			return false;
		m++;
	}
	return true;
}

int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	
	const int n =5;
	array<int,n> ar1;
	for(int i=0;i<n;i++){
		int a;cin>>a;
		ar1[i]=a;
	}

	for(auto i : ar1)
		cout<<i<<" ";
	cout<<"\n\n";
	
	sort(ar1.begin(),ar1.end());

	for(auto i : ar1)
		cout<<i<<" ";
	cout<<"\n\n";

	cout<<"Array front and back : "<<ar1.front()<<" "<<ar1.back();

	cout<<"\nIs array empty : ";
	if(ar1.empty())
		cout<<"True\n";
	else
		cout<<"False\n";

/*	int counter=2;
	for(int i=0;i<1000000;i++){
		if(isPrime(counter))
			arr.push_back(counter);
		counter++;
	}

	cout<<arr[10000];
*/
	vector<int> arr;

	for(int i=1;i<=10;i++){
		arr.push_back(i);
	}

	seiveOfEratosthenes(arr);

	for(auto i : arr){
		cout<<i<<" ";
	}
	cout<<endl;
	return 0;
}