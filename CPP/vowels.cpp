#include<iostream>
//#include<bits/stdc++.h>
using namespace std;

bool isVowel(char c ){
	char arr[] ={'a','i','e','o','u'};
	for(int i=0;i<5;i++){
		if(arr[i]==c)
			return true;
	}
	return false;
}


int main(){

	#ifndef  ONLINE_JUDGE
		freopen("input.txt" , "r" , stdin);
		freopen("output.txt" , "w" , stdout);
	#endif

	char end='\n';

	int tc;
	cin>>tc;

	while(tc--){
		string str;
		getline(cin,str);
		int vowel=0,conso=0;
		for(char c : str){
			if(c==' ' or c==',' or c=='"' or c=='/' or c=='.')
				continue;
			if(isVowel(c))
				vowel++;
			else
				conso++;
		}
		cout<<str<<end<<"number of consonant\t=>\t"<<conso<<"\nnumber of vowels \t=>\t"<<vowel<<end<<end;
	}



	return 0;
}