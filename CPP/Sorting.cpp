#include<iostream>
#include<array>
using namespace std;


void printArray(int arr[], int n){
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}

void BubbleSort(int arr[] , int n){
    int count=0;
    while(count<n-1){
        for(int i=0;i<n-count-1;i++){
            if(arr[i]>arr[i+1]){
                int temp = arr[i+1];
                arr[i+1]= arr[i];
                arr[i] = temp;
            }
        }
        count++;
    }
    printArray(arr,n);
}

void SelectionSort(int arr[] , int n){
    for(int i=0;i<n;i++){
        int min_idx = i;
        for(int j=i+1;j<n;j++){
            if(arr[min_idx]>arr[j]){
                min_idx = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
    }
    printArray(arr,n);
}

void InsertionSort(int arr[],int n){
    for (int i = 1; i < n; ++i){
    int key = arr[i];
    int j = i-1;

    while(key < arr[j] && j>=0){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}



int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    cout<<"Enter the number of elements : ";   
    int n=0;cin>>n;
    int arr[n] = {0};
    for(int i=0 ; i<n; i++){
        int a;cin>>a;
        arr[i]=a;
    }
    cout<<"\nOriginal Array : ";
    for(int x : arr){
        cout<<x<<" ";
    }
    cout<<"\n"; 
    cout<<"Bubble Sort      : ";
    BubbleSort(arr,n);

    cout<<"\n\n";
    int n2;cin>>n2;
    int arr2[n2]={0};
    for(int i=0;i<n2;i++){
        int a;cin>>a;
        arr2[i]=a;
    }

    cout<<"Original Array : ";
    printArray(arr2,n2);
    cout<<"SelectionSort  : ";
    SelectionSort(arr2,n2);

    cout<<"\n\n";
    int n3;cin>>n3;
    int arr3[n3]={0};
    for(int i=0;i<n3;i++){
        int a;cin>>a;
        arr3[i]=a;
    }

    cout<<"Original Array : ";
    printArray(arr3,n3);
    cout<<"SelectionSort  : ";
    SelectionSort(arr3,n3);


    return 0;
}
