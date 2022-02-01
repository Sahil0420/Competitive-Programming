#include<iostream>
#include<vector>
//#include<bits/stdc++.h>
using namespace std;

class library
{
private:
	vector<string> vec;
public:
	void addBook(string bookname){
		vec.push_back(bookname);
		cout<<"book added successfully\n";
	}

	void removeBook(string bookname){
		vec
		bool flag = false;
		for ( i = 0; i < vec.size(); ++i)
		{	
			if(vec[i] == bookname){
				flag = true;
				break;
			}
		}
		if(flag){
			vec.erase(i);
			cout<<bookname<<"book is removed\n";
		}else{
			cout<<bookname<<" was not available\n";
		}
	}

	void issueBook(string bookname){
		bool flag = false;
		int i=0;
		for(;i<vec.size();i++){
			if(vec[i] == bookname){
				flag = true;
				break;
			}
		}

		if(flag){
			vec[i]+="*";
			cout<<bookname<<" book issued to you ";
		}else{
			string bookn = bookname+"*";
			for(int i=0;i<vec.size();i++){
				if(bookn == vec[i]){
					cout<<"Book is issued to someone else\n";
					break;
				}
			}
		}
	}

	void returnBook(string bookname){
		string n = bookname+"*";
		for( int i=0; i<vec.size();i++){
			if( n == vec[i] ){
				n = bookname;
				cout<<"Book is returned successfully\n";
				return;
			}
		}
		cout<<"Book do not belong to this library\n";
	}
};


int main(){

	/*#ifndef ONLINE_JUDGE
		// freopen("input.txt" , "r" , stdin);
		// freopen("output.txt" , "w" , stdout);
	#endif*/

	char end = '\n';
	
	library lib;
	lib.addBook("sahil");


	return 0;
}