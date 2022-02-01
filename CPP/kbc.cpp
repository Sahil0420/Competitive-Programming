#include<iostream>
#include<fstream>
#include<vector>
//#include<bits/stdc++.h>
using namespace std;

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt" , "r" , stdin);
		freopen("output.txt" , "w" , stdout);
	#endif 

	char end ='\n';
	int lives  = 3;
	int scores = 0;

	ifstream fin("kbcquestions.txt");
	int n=0;
	while(!fin.eof()){
		n++;
		if(lives>0){
			string ques;
			getline(fin,ques);
			vector<string> vec(5);
			for(int i=0;i<5;i++){
				string op;
				getline(fin,op);
				vec[i] = op;
			}
			cout<<"Question : ["<<n<<"] : "<<ques<<end;
			for (int i = 0; i < vec.size()-1; ++i)
				cout<<"["<<(i+1)<<"]"<<"\t"<<vec[i]<<end;
			int option;
			cout<<"Enter the correct option => ";
			cin>>option;
			cout<<option<<end;
			if(vec[option-1] == vec[4]){
				scores+=5;
				cout<<"------------------------------------\n";
				cout<<"|\t\t\tcorrect answer\t\t\t|\n";
				cout<<"-------------------------------------\n";
			}else{
				lives--;
				cout<<"_________________________________________________________________________________________\n";
				cout<<"|\twrong answer\t\t|\t\tcorrect answer is => "<<vec[4]<<"\t\t|\n";
				cout<<"-----------------------------------------------------------------------------------------\n";
			}
			cout<<"_________________________________________________________________________\n";
			cout<<"|\t\t\tcurrent score =>"<<scores<<"\t\t\t|\t\t\t"<<"lives =>"<<lives<<"\t\t\t|\n";
			cout<<"-------------------------------------------------------------------------";
			cout<<end<<end;
		}else{
			cout<<"\nYour Final Score is : "<<scores<<'\n';
			break;
		}
	}
	return 0;
}
