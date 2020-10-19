#include <iostream>
#include <string>
using namespace std;

class A{
public:
	A(){
		cout<<"consy";
	}

	~A(){
		cout<<"Dessd";
	}
};

int main() {

  #ifndef ONLINE_JUDGE
  freopen("inputf.in", "r", stdin);
  freopen("outputf.in", "w", stdout);
  #endif

  A *a = new A[5];
  delete[] a;

  int b= 5 ,c=10 , d=15;
  int *arr[] = {&b,&c,&d};
  cout<<arr[1];

  int arr2[] = {10,20,40};
  cout<< -2[arr2];

  // cout<<setprecision(17);
  
  int x=100,y = 200;
  int *p = &x;
  int *q = &y;
  p = q;
  cout<<'\n'<<*p<<*q;

  return 0;
}
