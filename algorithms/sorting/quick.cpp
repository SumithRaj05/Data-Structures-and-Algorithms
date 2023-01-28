#include<iostream>
using namespace std;

int partition(int arr[], int start, int end){
    int pivot = arr[end];
    int pin = start;
    for(int i = start; i<end-1; i++){
        if(arr[i]<=pivot){
            swap(arr[pin], arr[i]);
            pin++;
        }
    }
    swap(arr[pin], arr[end]);
    return pin;
}

void quickSort(int arr[], int start, int end){
    if(start>=end)
        return;
    int pin = partition(arr, start, end);
    quickSort(arr, start, pin-1);
    quickSort(arr, pin+1, end);
}

int main(){
    int arr[] = {2,5,1,4,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr, 0, n-1);
    for(int i: arr)
        cout<<i<<"\t";
    cout<<endl;
    return 0;
}