#include<iostream>
using namespace std;

int partition(int arr[], int start, int end){
    int pivot = arr[end];
    int j = start-1;
    for(int i = start; i<end; i++){
        if(arr[i] <= pivot){
            j++;
            swap(arr[j], arr[i]);
        }
    }
    swap(arr[j+1], arr[end]);
    return j+1;
}

void quickSort(int arr[], int start, int end){
    if(start >= end)
        return;
    int pin = partition(arr, start, end);
    quickSort(arr, start, pin-1);
    quickSort(arr, pin+1, end);
}

int main(){
    int arr[] = {5,4,3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr, 0, n-1);
    for(int i: arr)
        cout<<i<<"\t";
    cout<<endl;
    return 0;
}