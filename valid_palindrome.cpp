#include <iostream>
using namespace std;

bool isPalindrome(string s, int left, int right) {
    while (left < right) {
        if (s[left] != s[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

bool valid_palindrome(string s){
	int n = s.size();
	int left=0 , right = n-1;
	while (left < right){
		if (s[left]!=s[right]){
			return isPalindrome(s, left+1 , right) || isPalindrome(s,left , right-1);
		}
		left++;
		right--;
	}
	return true;
}


int main() {

  #ifndef ONLINE_JUDGE
  freopen("inputf.in", "r", stdin);
  freopen("outputf.in", "w", stdout);
  #endif

  int t; 
  cin>>t;
  while (t--){
  	string s;
  	cin>>s;
  	if (valid_palindrome(s)){
  		cout<<"YES\n";
  	}else{
  		cout<<"NO\n";
  	}
  }

  return 0;
}
