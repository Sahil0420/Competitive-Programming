// Practical_21
#include<iostream>
#include<fstream>
using namespace std;

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt" , "r" , stdin);
		freopen("output.txt" , "w" , stdout);
	#endif

	char end = '\n';

	ifstream file_reader;
	file_reader.open("file.txt");

	ofstream file_writer;
	file_writer.open("file2.txt");

	string s;
	cin>>s;

	getline(file_reader,s);
	cout<<s;

	file_reader.close();		//closing the file
	file_writer.close();		//closing the file

	return 0;
}


/*

:::Output:::
	Enter the data you wanna write in the file => It's nothing but G thang

	It's nothing but G thang 
	Length of the string in file => 24
*/