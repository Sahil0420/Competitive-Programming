// #include<iostream>
// #include<bits/stdc++.h>

// using namespace std;
// int main(){

// 	#ifndef ONLINE_JUDGE
// 		freopen("input.txt" , "r" , stdin);
// 		freopen("output.txt" , "w" , stdout);
// 	#endif

// 	int marks;
// 	cin>>marks;
// 	switch(marks){
// 		case (marks > 70):
// 			cout<<"GRADE C \n";
// 			break;

// 		case (marks >80):
// 			cout<<"GRADE B\n";
// 			break;

// 		case (marks > 90):
// 			cout<<"GRADE C\n";
// 			break;

// 		default :
// 			cout<<""

// 	}

// return 0;
// }

#include<iostream>
// #include<bits/stdc++.h>

using namespace std;
class prime{
public:
	int i=2;
	int j=2;
	int n;
	void getdata(){
		cout<<"ENTER THE DATA : ";
		cin>>n;
		while(i<=n){
			bool flag=true;
			j=2;
			while(j<=i/2){
				if(i%j==0){
					flag = false;
					break;
				}
				j++;
			}
			if(flag) cout<<i<<" ";
			i+=1;
		}
	}
};

using namespace std;
int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt" , "r" , stdin);
		freopen("output.txt" , "w" , stdout);
	#endif

	prime Obj;
	Obj.getdata();


return 0;
}