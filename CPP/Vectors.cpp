#include<bits/stdc++.h>
using namespace std;

void findKthLargest(vector<int>& nums , int k){
	sort(nums.begin(),nums.end());
	auto last = (nums.end()-k);
	cout<<*last;
}

int main(int argc, char const *argv[])
{
	vector<int> vec1={1,2,66,7,8};
	for(auto i : vec1) cout<<i<<" ";
	cout<<endl;	
	vector<int> vec2={4,5,6,9,10};
	for(auto i : vec2) cout<<i<<" ";

	vector<int> vec3(vec1.size()+vec2.size());
	cout<<endl;
	findKthLargest(vec1,4);
	return 0;
}