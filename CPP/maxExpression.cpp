#include <iostream>
#include<algorithm>
using namespace std;

void solve(){
    int n;cin>>n;
    string s;cin>>s;
    
    string temp="";
    string signs="";
    
    for(int i=0;i<n;i++){
        if(s[i]=='+' or s[i]=='-'){
            signs+=s[i];
        }
        else{
            temp+=s[i];
        }
    }
    
    sort(temp.begin() , temp.end());
    sort(signs.begin() , signs.end());
    string ans="";
    
    int nn = temp.size();
    int ss = signs.size();
    
    int j=ss-1;
    for(int i=0;i<nn;i++){
        if(j>=0){
            ans+=temp[i];
            ans+=signs[j];
            j--;
        }
        else{
            ans+=temp[i];
        }
    }
    reverse(ans.begin(),ans.end());
    cout<<ans<<"\n";
}

int main() {
    int tc;cin>>tc;
    while(tc--){
        solve();
    }
	return 0;
}
