#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	map<pair<int,int> ,int>  m;
	pair<int,int>p1,p2;
	p1={2,2};
	p2={2,3};
	cout<<"CoMPARISON OF PAIRS\t= "<<(p1<p2); //WE can compare pair sets and vectors

	map<set<int>,int> nameage;
	set<int> s1 ={1,2,3};
	set<int> s2 = {2,3};
	cout<<"\nCOMPARISON OF SET\t=\t"<<(s1<s2);

	map<pair<string,string> , vector<int>> M;
	int n;cin>>n;
	for(int i=0;i<n;i++){
		string fname;cin>>fname;
		string lname;cin>>lname;
		int ct;cin>>ct;
		for(int j=0;j<ct;j++){
			int el;cin>>el;
			M[{fname,lname}].push_back(el);	
		}
	}

	cout<<endl;
	for(auto &pr : M){
		auto &fullname = pr.first;
		auto &list = pr.second;
		cout<<fullname.first<<" "<<fullname.second<<"\t";
		for(auto &i : list){
			cout<<i<<" ";
		}
		cout<<endl;
	}
	
	return 0;
};

/*3
sahil chandel 3 2 3 4 
aman thakur 2 1 3
rahul thakur 3 4 5 6
*/