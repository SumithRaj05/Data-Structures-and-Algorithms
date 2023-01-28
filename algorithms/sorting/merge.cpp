#include<iostream>
using namespace std;

void merge(int arr[], int left[], int right[], int n, int mid){
    int i=0, j=0, k=0;
    int lenL = mid;
    int lenR = n-mid;
    while(i<lenL && j<lenR){
        if(left[i]<right[j]){
            arr[k] = left[i];
            i++;
        }else{
            arr[k] = right[j];
            j++;
        }
        k++;
    }
    while(i<lenL){
        arr[k] = left[i];
        i++;
        k++;
    }
    while(j<lenR){
        arr[k] = right[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int n){
    //base condition
    if(n<2){
        return;
    }
    int mid = n/2;
    int left[mid], right[n-mid];
    for(int i = 0; i<mid; i++)
        left[i] = arr[i];
    for(int i = mid; i<n; i++)
        right[i-mid] = arr[i];
    //divide recursive
    mergeSort(left, mid);
    mergeSort(right, n-mid);
    //conquer
    merge(arr, left, right, n, mid);
}

int main(){
    int arr[] = {3,2,4,5,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr, n);
    for(int i: arr)
        cout<<i<<"\t";
    cout<<endl;
    return 0;
}