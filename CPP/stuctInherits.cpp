#include<iostream>
//#include<bits/stdc++.h>
using namespace std;

struct Base
{	
public:
	string name = "";
	int age = 0;
};

struct Derived : Base {
	string surname = "";
	void printDetail(){
		cout<<this->name<<' '<<this->surname<<"'s age is "<<this->age;
	}
};


class A{
public:
	string name = "sahil chandel";
	int age = 17;
};

class B : public A{
public:
	string hair = "gray";
	void printDetail();
};

void B::printDetail(){
	cout<<this->name<<"'s age is "<<this->age<<"and hair color is "<<this->hair;
}

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt" , "r" , stdin);
		freopen("output.txt" , "w" , stdout);
	#endif

	char end = '\n';

	Derived obj1;
	obj1.name="sahil";
	obj1.surname="chandel";
	obj1.age = 17;
	obj1.printDetail();

	B obj2;
	obj2.printDetail();

	return 0;
}