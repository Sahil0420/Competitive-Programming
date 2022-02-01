#include<iostream>
#include<set>
#include<unordered_set>
using namespace std;

void printSet(set<string> &m){
	for (auto i : m){
		cout<<i<<" ";
	}
	cout<<endl;
}

void printUSet(unordered_set<string> &m){
	for (auto i : m){
		cout<<i<<" ";
	}
	cout<<endl;
}

int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);	
	freopen("output.txt","w",stdout);
	#endif

	cout<<"\t\tORDERED SET"<<endl;
	set<string> s;
	int e;cin>>e;
	for(int i=0;i<e;i++){
		string n;cin>>n;
		s.insert(n);
	}

	printSet(s);
	s.erase("def");
	printSet(s);

	cout<<"\n \t\tUNORDERED SET "<<endl;

	unordered_set<string> s1;
	int e1;cin>>e1;
	for(int i=0;i<e1;i++){
		string n;cin>>n;
		s1.insert(n);
	}

	printUSet(s1);
	s1.erase("def");
	printUSet(s1);

	return 0;
}