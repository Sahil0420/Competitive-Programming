#include<iostream>
using namespace std;

int main(){
    int n;cin>>n;
    int z=1;
    for(int i=1;i<=n;i++){
        for(int j=n;j>i;j--){
            cout<<"\t";
        }
        cout<<i<<"\t";

        if(i>1 and i!=n){
            for(int k=1;k<=z;k++){
                cout<<"\t";
            }
            cout<<i<<"\t";
            z+=2;
        }

        if(i==n){
            for(int j=0;j<(2*n)-2;j++)
                cout<<i<<"\t";
        }
        cout<<endl;
    }

    return 0;
}