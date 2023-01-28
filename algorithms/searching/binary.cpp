#include<iostream>
using namespace std;

int binarySearch(int arr[], int& n, int& key){
    int low = 0, high = n-1, mid;
    while(low <= high){
        mid = (low+high)/2;
        if(arr[mid] == key)
            return mid+1;
        else if(arr[mid] > key)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}

int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 4;
    int pos = binarySearch(arr, n, key);
    (pos == -1)? cout<<"Element not found :(": cout<<"Element found at position "<<pos;
    cout<<endl;
    return 0;
}