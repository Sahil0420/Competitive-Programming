#include <iostream>
#include <math.h>
using namespace std;

double simple_interest(double p ,double r , double t){
	return p*r*t/100;
}

double compound_interest(double p,double r,double t){
	return p*pow(1+r/100,t)-p;
}

int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	double  p,r,t;
	cin>>p>>r>>t;
	double si = simple_interest(p,r,t);
	double ci = compound_interest(p,r,t);
	cout<<"Simple Interest : "<<si<<"\n";
	cout<<"Compound Interest : "<<ci<<"\n";
	cout<<"difference between compound_interest and simple_interest = "<<abs(si - ci);
	return 0;
}
