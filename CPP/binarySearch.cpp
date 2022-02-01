#include<iostream>
//#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[] , int n , int key){
	int l=0,mid=0,r=n;
	while(l<=r){
		mid = (l+r)/2;
		if(arr[mid] == key ){
			return mid;
		}
		else{
			if( key < arr[mid] ){
				r=mid-1;
			}else{
				l = mid+1;
			}
		}
	}
	return -1;
}



int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt" , "r" , stdin);
		freopen("output.txt" , "w" , stdout);
	#endif

	char end = '\n';
	int n = 7;
	int arr[] = {45,65,87,89,90,99,101};

	cout<<binarySearch(arr, n , 75567);

	int n1 =4;
	int * m = &n1;
	cout<<end<<m<<" "<<n1;

	return 0;
}