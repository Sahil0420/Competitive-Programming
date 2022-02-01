#include<bits/stdc++.h>
using namespace std;

void BubbleSort(vector<int> arr){
    int n=arr.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++){
            if (arr[j]>arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(auto x :arr)
        cout<<x<<" ";
    cout<<"\n";
}

void MergeSort(vector<int> &arr){
    if (arr.size()>1){
        int n = arr.size();
        int mid = n/2;

        vector<int> left;
        vector<int> right;
        for(int i=0;i<mid;i++){
            left.push_back(arr[i]);
        }

        for(int j=mid;j<n;j++){
            right.push_back(arr[j]);
        }

        MergeSort(left);
        MergeSort(right);

        int i=0,j=0,k=0;
        while(i<left.size() and j<right.size()){
            if (left[i]<right[j]){
                arr[k] = left[i];
                i++;
            }
            else{
                arr[k]=right[j];
                j++;
            }
            k++;
        }

        while (i < left.size()){
            arr[k++] = left[i++];
        }

        while(j < right.size()){
            arr[k++] = right[j++];
        }
    }
}

void SelectionSort(vector<int> arr){
    int n = arr.size();
    for(int step=0;step<n;step++){
        for(int i=step+1;i<n;i++){
            if (arr[step] > arr[i]){
                int temp = arr[step];
                arr[step] = arr[i];
                arr[i] = temp;
            }
        }
    }
    for (auto X : arr){
        cout<<X<<" ";
    }
        cout<<"\n";
}

void InsertionSort(vector<int>arr){
    int n = arr.size();
    for (int i=1;i<=n-1;i++){
        int key = arr[i];
        int j=i-1;
        while (j>=0 and key<arr[j]){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1] = key;
    }
    for(auto x : arr)
        cout<<x<<" ";
    cout<<endl;
}

int main(){
    vector<int > v;
    v.push_back(45);
    v.push_back(4);
    v.push_back(5);
    v.push_back(35);
    v.push_back(36);
    v.push_back(32);
    v.push_back(31);
    v.push_back(30);
    v.push_back(29);
    v.push_back(28);
    v.push_back(27);
    // BubbleSort(v);
    // SelectionSort(v);
    InsertionSort(v);
    MergeSort(v);
    for (auto x : v)
        cout<<x<<" ";
    cout<<endl;
    return 0;
}