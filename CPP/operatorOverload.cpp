#include<iostream>
using namespace std;

class Complex{
private:
	int real, imag;
public:
	Complex(int x=0 , int y=0){
		this->real = x;
		this->imag = y;
	}

	Complex operator + (Complex const &obj){
		Complex res;
		res.real = real + obj.real;
		res.imag = imag + obj.imag;
		return res;
	}

	Complex operator * (Complex const &obj){
		Complex res;
		res.real = real * obj.real;
		res.imag = imag * obj.imag;
		return res;
	}

	void getNum(){
		cout<<real<<" + "<<imag<<"i\n";
	}

};



int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt" , "r" , stdin);
		freopen("output.txt" , "w" , stdout);
	#endif

	char end = '\n';

	Complex obj1(5,4);

	Complex obj2(4,3);

	Complex c = obj1*obj2;

	c.getNum();

	return 0;
}