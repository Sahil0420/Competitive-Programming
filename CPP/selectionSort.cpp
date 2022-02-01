#include<iostream>
using namespace std;

void selectionSort(int arr[] , int n ){
	for(int i=0;i<n-1;i++){
		int loc = i+1;

		for(int j=i+1 ; j<n;j++){
			if(arr[j] < arr[loc])
				loc = j;
		}

		int temp = arr[loc];
		arr[loc] = arr[i];
		arr[i] = temp;

	cout<<i<<"-->";
	for(int k=0;k<n;k++){
		cout<<arr[k]<<" ";
	}
	cout<<endl;
	}
}

void abc(int a ,int b){
	cout<<a<<" "<<b;
}

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt" , "r" , stdin);
		freopen("output.txt" , "w" , stdout);
	#endif

	char end = '\n';
	
	int n;cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];

	selectionSort(arr, n);

	void * ab = &n ;

	cout<<*(int*)ab;

	void (*abc1)(int , int ) = &abc;

	cout<<" function called by pointer : "; 
	(*abc1)(43 , 662);

	float ii = 4734.12274;
	int i = (int) ii;

	cout<<fixed;
	cout<<ii<<" ";
	return 0;
}
