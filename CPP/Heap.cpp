#include<iostream>
#include <vector>
//#include<bits/stdc++.h>
using namespace std;

//zero index based heap
//left child is at 2*i+1
//right child is at 2*i+2

class maxHeap{
private:
	void swap(int &i , int &j){
		int temp = i;
		i = j;
		j = temp;
	}

public:
	int arr[100];
	int size;

	maxHeap(){
		arr[0] = -1;
		size = -1;
	}	


	void insert( int val ){
		size+=1;
		int index = size;
		this->arr[index ] = val;

		while(index>0){
			int parent = index/2;

			if(this->arr[parent] < this->arr[index]){
				this->swap(this->arr[parent] , this->arr[index]);
				index = parent;
			}else{
				return;
			}
		}
	}

	void printHeap(){
		for(int i=0;i<=size;i++)
			cout<<arr[i]<<" ";
	}



};

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt" , "r" , stdin);
		freopen("output.txt" , "w" , stdout);
	#endif

	maxHeap H;
	H.insert(36);
	H.insert(3);
	H.insert(32);
	H.insert(3);
	H.insert(2);
	H.printHeap();


return 0;
}