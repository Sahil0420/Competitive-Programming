#include<iostream>
using namespace std;
class Parent
{
public:
	// Parent(string name,int age = 10){
	// 	cout<<"Parents Name is : "<<name<<" and Age is : "<<age<<endl;
	// }
	void table(){
		for(int i=1;i<11;i++){
			cout<<"5 X "<<i<<" = "<<5*i<<endl;
		}
	}
};

class Son :public Parent{
public:
	Son(string name ,int age){
		cout<<"Sons name is : "<<name<<" and Age is : "<<age<<endl;
	}
};

int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
	freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
#endif
	string pname;cin>>pname;
	int page;cin>>page;
	Parent p1();
	string sname;cin>>sname;
	int sage;cin>>sage;
	Son s1(sname,sage);
	s1.table();
	return 0;
}