#include<iostream>
using namespace std;

int linearSearch(int arr[], int& n, int& key){
    for(int i = 0; i<n; i++){
        if(arr[i] == key){
            return i+1;
        }
    }
    return -1;
}

int main(){
    int arr[] = {2,4,1,3,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 5;
    int pos = linearSearch(arr, n, key);
    (pos == -1)?
        cout<<"Element not present :("
        :cout<<"Element present at position "<<pos;
    
    cout<<endl;
    return 0;
}