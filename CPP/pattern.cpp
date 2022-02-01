#include<iostream>
using namespace std;

class ABC{
public:
	int n;
	void getData(){
		cin>>n;
	}
};

class XYZ : public ABC{
public:
	void display(){
		for(int i=n;i>=1;i--){
			for(int j=n;j>=i;j--){
				if(j>=i)
					cout<<j<<" ";
				else
					cout<<" ";
			}

			for(int j=1;j<=n;j++){
				if(j>=i)
					cout<<j<<" ";
				else
					cout<<"    ";
			}	

			cout<<'\n';
		}
	}
};

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt" , "r" , stdin);
		freopen("output.txt" , "w" , stdout);
	#endif
	XYZ obj;
	obj.getData();
	obj.display();
return 0;
}