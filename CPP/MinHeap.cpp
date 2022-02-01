#include<iostream>
//#include<bits/stdc++.h>
using namespace std;
class MinHeap{
public:
	int arr[100];
	int size;

	MinHeap(){
		arr[0] =-1;
		size=0;
	}

	void insert(int val ){
		size+=1;
		int i = size;
		arr[i] = val;
		while(i>1){
			int parent = i/2;

			if(arr[i]<arr[parent] and i<=size){
				swap(arr[i],  arr[parent]);
				i = parent;
			}else{
				return;
			}
		}	
	}

	void print(){
		for(int i=1;i<=size;i++){
			cout<<arr[i]<<" ";
		}
		cout<<"\n";
	}

	void remove(){
		if( size==0 ){
			cout<<"No items to remove.\n";
			return;
		}

		arr[1] = arr[size];
		size--;

		int index=1;
		while(index < size){
			int leftIndex = 2*index;
			int rightIndex = 2*index+1;

			if(leftIndex < size and arr[index]>arr[leftIndex]){
				swap(arr[leftIndex] , arr[index]);
				index = leftIndex;
			}
			else if (rightIndex < size and arr[index]>arr[rightIndex]){
				swap(arr[rightIndex],arr[index]);
				index = rightIndex;
			}else{
				return;
			}
		}
	}

};

void minheapify(int *arr , int n , int i){
	int smallest = i;
	int left = 2*i;
	int right = 2*i+1;

	if ((left < n) and arr[smallest]>arr[left]){
		smallest = left;
	}

	if (right < n and arr[smallest] > arr[right]){
		smallest = right;
	}

	if(smallest != i){
		swap(arr[smallest],arr[i]);
		minheapify(arr,n,smallest);
	}
}

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
		
		MinHeap heap;
		heap.insert(100);
		heap.insert(10);
		heap.insert(20);
		heap.insert(30);
		heap.insert(60);
		heap.insert(80);
		heap.insert(90);
		heap.print();
		heap.remove();
		// heap.remove();
		heap.print();


		cout<<"\nHEAPIFYING THE NEW ARRAY : \n";
		int a = 7;
		int arr[a+1] = {-1 , 10 , 30 ,20 , 100 , 60 , 80 , 90};

		for(int i=1;i<a/2;i++){
			minheapify(arr,a,i);
		}

		for(int i=1;i<=a ;++i)
			cout<<arr[i]<<" ";
		cout<<"\n";

	return 0;
}
