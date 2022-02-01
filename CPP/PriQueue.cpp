#include<iostream>
#include<queue>
//#include<bits/stdc++.h>
using namespace std;
int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	
	cout<<"USING PRIORITY QUEUE FOR MAX HEAP \n";

	priority_queue<int> pq;
	pq.push(100);
	pq.push(101);
	pq.push(102);
	pq.push(103);
	pq.push(90);
	pq.push(80);

	cout<<pq.top()<<' ';
	pq.pop();
	cout<<pq.top();

	cout<<"\nUSING PRIORITY QUEUE FOR MIN HEAP \n";
	priority_queue <int , vector<int> , greater<int> > minheap;
	minheap.push(2);
	minheap.push(5);
	minheap.push(3);
	minheap.push(6);

	cout<<minheap.top()<<" ";
	minheap.pop();
	cout<<minheap.top()<<" ";

	

	return 0;
}
