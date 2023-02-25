#include<bits/stdc++.h>
using namespace std;

int partition(vector<int> &a, int low, int high){
    int pivot = a[high];
    int i = high-1;
    for(int j=low; j<high; j++){
        if(a[j]>=pivot){
            swap(a[j],a[i]);
            i--;
        }
    }
    swap(a[i+1],a[high]);
    return i+1;
}

void quicksort(vector<int> &a, int low, int high){
    if(low>=high)
        return;
    int pivot = partition(a,low,high);
    quicksort(a,low,pivot-1);
    quicksort(a,pivot+1,high);
}

int main(){
    vector<int> a = {5,4,3,2,1};
    int n = a.size();
    quicksort(a,0,n-1);
    for(int i:a){
        cout<<i<<"\t";
    }
    cout<<endl;
    return 0;
}