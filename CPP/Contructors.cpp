#include<iostream>
using namespace std;

class Calculator{
public:
	int side1,side2;
	// creating a constructor
	Calculator(int n1 ,int n2){
		side1 = n1;side2=n2;
	}

	void prinSum(){
		std::cout<<"SUM OF TWO NUMBERS = "<<side1+side2<<"\n";
	}

	void printProd(){
		std::cout<<"PRODUCT OF TWO NUMBERS = "<<side1*side2<<"\n";
	}

};
/*Calculator :: Calculator(int n1, int n2){
	side1 = n1;
	side2 = n2;
}*/

/////////////////////////////////////////// ABSTRACT BASES CLASSES ////////////////////////////////////////////////////
/*abstract base classes are the classes which are used as base for other classes
	abstract base classes are used to craete classes from them and it must contain
	atleast one pure virtual method 
*/

class Shape
{
public:
	virtual int Area()=0; //Pure virtual function
	void setWidth(int w){
		width = w;
	}

	void setHeight(int h ){
		height = h;
	}

protected:
	int width,height;
};

class Rectangle : public Shape{
public :
	// The implementation for area is specific to a rectangle
	int Area(){
		return width*height;
	}
};

class Triangle : public Shape{
public:
	int Area(){
		return(width*height)/2;
	}
};

int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
	freopen("output.txt","w",stdout);
	freopen("input.txt","r",stdin);
	#endif

	int a,b;
	std::cin>>a>>b;
	Calculator c1(a,b);
	c1.prinSum();
	c1.printProd();

	Rectangle R;
	Triangle T;

	int side1,side2;
	cin>>side1>>side2;
	R.setWidth(side1);
	R.setHeight(side2);
	if(side1==side2){
		cout<<"Area of square = "<<R.Area();
	}
	else{
		cout<<"Area of Rectangle"<<R.Area()<<"\n";
	}

	int th,tw;
	cin>>th>>tw;
	T.setHeight(th);
	T.setWidth(tw);
	cout<<"Area of the triangle = "<<T.Area();

	return 0;
} 