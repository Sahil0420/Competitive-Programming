#include"iostream"
using namespace std;

void printArray(int arr[],int n ){
    for(int i=0;i<n;i++)
        cout<<arr[i]<<"\t";
    cout<<endl<<endl;
}

void BubbleSort(int arr[],int n){
    cout<<"::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::BUBBLE--SORT::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n";
    int counter=0;
    while(counter<n){
        for(int i =0 ; i<n-counter-1;i++){
            if(arr[i]>arr[i+1]){
                int temp = arr[i];
                arr[i]  = arr[i+1];
                arr[i+1] = temp;
            }
        }
        counter++;
    }
}

void SelectionSort(int arr[] , int n ){
    cout<<":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::SELECTION--SORT::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n";
    int min_idx;
    for (int i = 0; i < n-1; ++i){
        min_idx = i;
        for(int j=i+1; j < n ;++j){
            if(arr[j] < arr[min_idx])
                min_idx = j;
            int temp  = arr[min_idx];
            arr[min_idx] = arr[i];
            arr[i] = temp;
        }
    }
}

void InsertionSort(int arr[] , int n ){
    cout<<"::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::INSERTION--SORT:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n";
    int i,key,j;
    for (i = 0; i < n; ++i)
    {
        key = arr[i];
        j = i-1;

        while( j >= 0 && arr[j] > key ){
            arr[ j+1 ] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;
    }
}



int main(){
    cout<<"Hello World This is the sahil chandel\n";

    int arr[] = {2,1,4,5,6,9,8,7};
    int n =sizeof(arr)/sizeof(arr[0]);
    BubbleSort(arr,n);
    printArray(arr,n);
    
    int arr1[] = {2,1,4,5,6,9,8,7};
    int n1 =sizeof(arr1)/sizeof(arr1[0]);
    SelectionSort(arr1,n1);
    printArray(arr1,n1);
    
    int arr2[] = {2,1,4,5,6,9,8,7};
    int n2 =sizeof(arr2)/sizeof(arr2[0]);
    InsertionSort(arr2,n2);
    printArray(arr2,n2);
}