#include<iostream>
using namespace std;

int main(){
    cout<<"Question : What is the capital of INDIA  ? \n";
    cout<<"1. Chandigarh\t\t2. Delhi\t\t\n3. Kolkata\t\t4. Mumbai\n";

    char ch;
    cout<<"\nChoose an option 1 , 2 , 3 , 4 ";
    cin>>ch;

    
    
    switch(ch){
        case '1':
            cout<<"\nSorry , ye galat uttar hai.\n";
            break;
        case '2':
            cout<<"\nSaat Crore.\n";
            break;
        case '3':
            cout<<"\nSorry , ye galat uttar hai.\n";
            break;
        case '4':
            cout<<"\nSorry , ye galat uttar hai.\n";
            break;
        
        default : 
            cout<<"\nChoose a coorect option.\n";
    }
    
    return 0;
}