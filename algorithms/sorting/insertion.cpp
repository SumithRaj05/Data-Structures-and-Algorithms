#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n = 6;
    int array[n] = {10,5,3,8,2,4};
    
    cout<<"Elements before sorting:"<<endl;
    for(int i:array){
        cout<<i<<"\t";
    }
    cout<<endl;

    for(int i = 1; i<n; i++){
        int temp = array[i];
        int j = i-1;
        while((array[j]>temp) && (j>=0)){
            array[j+1] = array[j];
            j--;
        }
        array[j+1] = temp;
    }

    cout<<"Elements after sorting:"<<endl;
    for(int i:array){
        cout<<i<<"\t";
    }
    cout<<endl;

    return 0;
}