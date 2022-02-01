#include<iostream>
// #include<bits/stdc++.h>
using namespace std;

class Human{
public:
	int height=180;
	int weight=65;
	int age=18;

private:
	string gender="";

public:
	int getAge(){
		return (this->age);
	}

	int getHeight(){
		return (this->height);
	}

	void setWeight(){
		cout<<"Enter the weight : ";
		cin>>this->weight;
	}

	int getWeight(){
		return(this->weight);
	}
};

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt" , "r" , stdin);
		freopen("output.txt" , "w" , stdout);
	#endif

	//code goes here
	Human sahil;
	cout<<sahil.getAge()<<endl;
	cout<<sahil.getHeight()<<endl;
	sahil.setWeight();
	cout<<sahil.getWeight();

return 0;
}