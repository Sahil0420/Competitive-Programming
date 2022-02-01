#include<iostream>
//#include<bits/stdc++.h>
using namespace std;
void swaparr(int *arr, int i , int  j){
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

int partition(int *a ,int l , int h){
	int pivot = a[l];
	int i=l;
	int j=h;

	while(i<j){
		while(a[i]<=pivot) i++;
		while(a[j]> pivot) j--;
	
			if (i<j){
				swaparr(a,i,j);
		}
	}
	swaparr(a,j,l);
	return j;
}

void quickSort(int *arr , int l , int h){
	if (l<h){
		int pivot = partition(arr,l,h);
		quickSort(arr,l,pivot-1);
		quickSort(arr,pivot+1,h);
	}
}

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
		
		int n;cin>>n;
		int a[n]={0};
		for(int i=0;i<n;i++)
			cin>>a[i];
		int l=0,h=n-1;
		
		for(int i=0;i<n;i++) cout<<a[i]<<" ";
			cout<<"\n";
		quickSort(a,l,h);


		for(int i=0;i<n;i++) cout<<a[i]<<" ";
			cout<<"\n";
	return 0;
}
