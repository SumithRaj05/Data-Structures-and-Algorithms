#include<bits/stdc++.h>
using namespace std;

void heapify(vector<int> &arr, int i, int n){
    int parent = i;
    int left = (2*i)+1;
    int right = (2*i)+2;
    if(left<n && arr[left]>arr[parent]){
        parent = left;
    }
    if(right<n && arr[right]>arr[parent]){
        parent = right;
    }
    if(parent!=i){
        swap(arr[i], arr[parent]);
        heapify(arr, parent, n);
    }
}

void heapSort(vector<int> &arr, int n){
    for(int i=n/(2-1); i>=0; i--){
        heapify(arr, i, n);
    }
    for(int i=n-1; i>=0; i--){
        swap(arr[0], arr[i]);
        heapify(arr, 0, i);
    }
}

int main(){
    vector<int> arr = {5,1,4,2,6,3};
    int n = arr.size();
    heapSort(arr, n);
    for(int i: arr){
        cout<<i<<"\t";
    }
    cout<<"\n";
    return 0;
}