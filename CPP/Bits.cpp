#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int num=2;
	while(num<=10){
		cout<<(num<<1)<<" ";
		num++;
	}
	cout<<"\n";

	vector<int> v ={1,2,3,4,5,6,7,8,9,10};
	for( auto i : v )
		if(!(i&1))
			cout<<i<<" : even"<<" ";
		else
			cout<<i<<" : odd"<<" " ;
	cout<<"\n";
	int a=5,b=7;
	cout<<a<<" "<<b<<endl;
	a=a^b;
	b=a^b;
	a=a^b;
	cout<<a<<" "<<b<<endl;

	 

	return 0;
}