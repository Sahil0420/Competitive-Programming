#include<iostream>
using namespace std;

void swapInArray( int arr[], int low , int upper){
	int temp = arr[low];
	arr[low] = arr[upper];
	arr[upper] = temp;
}

void revArray(int arr[],int n ){
	int lower,upper;
	for(int i=0;i<=(n-1)/2;i++){
		lower = i;
		upper = n-1-i;
		swapInArray(arr,lower,upper);
	}
}

int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n;cin>>n;
	int arr[n]={0};
	for(int i=0;i<n;i++){
		int a;cin>>a;
		arr[i]=a;
	}

	for(auto a : arr) cout<<a<<" ";
	cout<<endl;
	
	revArray(arr,n);
	for(auto a:arr) cout<<a<<" ";
	cout<<"\n";
	return 0;
}