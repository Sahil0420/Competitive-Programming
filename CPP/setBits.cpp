#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;
/*combination of arrays and string */

vector<string> combination(string str){
	vector<string> ans;
	int n = 1 << size(str);
	for(int i=1;i<n;i++){
		string temp="";
		int x = i;
		int j=0;
		while(x){
			if(x&1){
				temp+=str[j];
			}
			j++;
			x = x >> 1;
		}
		ans.push_back(temp);
	}
	sort(ans.begin(),ans.end());
	return ans;
}

/*find the position of the only set bit */
// int posOfSetBit(int num){
// 	if(n==)
// }

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

	for(string s : combination("abcd"))
		cout<<s<<"\n";
	
	int a=1,b=1,c=0,d=0;
	int arr[] ={a,b,c,d};

	bool flag=false;
	for(int i : arr){
		if(i&1){
			flag = false;
			break;
		}
		else{
			flag = true;
		}
	}

	if(flag) cout<<"IN";
	else cout<<"OUT";

}



