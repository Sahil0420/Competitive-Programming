#include<iostream>
#include<map>
// #include <unordered_map>

using namespace std;

/*int main(int argc, char const *argv[])
{

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	map <int,string> students;
	cin>>students[1];
	cin>>students[2];
	cin>>students[3];
	students.insert({4,"Sushant"});
	map<int,string> :: iterator it;
	for(it = students.begin(); it != students.end();it++)
		cout<<(*it).first<<"\t=\t"<<(*it).second<<endl;

	auto f = students.find(6); //O(log(n))
	if(f!= students.end())
		cout<<(*f).second<<endl;
	else
		cout<<"NOT FOUND"<<endl;
	

	for(auto &pr : students)
		cout<<pr.first<<"\t=\t"<<pr.second<<endl;

	students.erase(3); 	//O(log(n))
	f=students.find(1);
	students.erase(f);
	cout<<endl;
	for(auto &pr : students)
		cout<<pr.first<<"\t=\t"<<pr.second<<endl;


	return 0;
}*/

/*Aman
Sahil
Rahul*/

/*Given N strings , print unique strings in
 lexiographical order with their frequency 
		 N <= 10^5
 		|S| <= 100
*/

int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	map<string,int> m;
	int n;cin>>n;
	for(int i=0;i<n;i++){
		string s;cin>>s;
		/*m[s] = m[s]+1*/
		m[s]++;
	}

	for(auto i:m){
		cout<<i.first<<"\t"<<i.second<<endl;
	}
	
	return 0;
}