#include<iostream>
#include<math.h>
#include<vector>
#include<unordered_set>
using namespace std;

void primeFactors(long long int n){
	unordered_set<long long int> v;
	while(n % 2 ==0 ){
		v.insert(2);
		n=n/2;
	}

	for(int i=3;i<=sqrt(n);i=i+2){
		while(n%i==0){
			v.insert(i);
			n=n/i;
		}
	}

	if(n>2){
		v.insert(n);
	}
	
	for(auto i : v){
		cout<<i<<" ";
	}
	cout<<endl;
}

long long int gcd( long long int  a,long long int b ){
	if(b==0){
	     return a;
	}
	else{
	     return gcd( b, a%b );
	}
}

long long lcm (long long a, long long b){
		return (a*b)/gcd(a,b);
}	

long long int lcmOfArray(vector<int> arr){
	long long int lcm = arr[0];
	for( int i = 1 ;i < arr.size(); i++ ){
		lcm = lcm*arr[i]/gcd(lcm,arr[i]);
	}
	return lcm;
}

double myPow(double x, int n) {
        if (n==0){
            return 1;
        }
        if (n==1){
            return x;
        }
        if (n==-1){
            return 1/x;
        }
        if (n&1 == 1 && n>0){
            return x*myPow(x,n-1);
        }
        else if(n&1 == 1 && n<0)
        {
            return 1/x*myPow(x,n+1);
        }
        else{
            double p = myPow(x,n/2);
            return p*p;
        }
        
    }

int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int n;cin>>n;
	int ct=0,sum=0;

	for(int i=1;i<=sqrt(n);i++){
		if(n%i==0){
			cout<<i<<" " << n/i <<endl;
			ct+=1;
			sum+=i ;
			if(n/i!=i){
				sum+=n/i;
				ct+=1;
			}
		}
	}
	cout<<"Number"
	"of factors : "<<ct<<"\nSum of factors : "<<sum<<endl;
	int t;cin>>t;
	while(t-->0){
		long long int num;cin>>num;
		primeFactors(num);
	}	

	int a,b;cin>>a>>b;
	cout<<"HCF OF "<<a<<" and "<<b<<" = "<<gcd(a,b)<<endl;
	cout<<"LCM OF "<<a<<" and "<<b<<" = "<<lcm(a,b)<<endl;
	vector<int> v;
	for(int i=1;i<21;i++){
		v.push_back(i);
	}
	cout<<"LCM OF ";
	for(auto i : v)
		cout<<i<<" ";
	cout<<" = "<<lcmOfArray(v);
	cout<<"\n2 power of 25 "<<myPow(12+13,2)<<"\n";
	return 0;
}

/*8
2
165
45
4
8*/