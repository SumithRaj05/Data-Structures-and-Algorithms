#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> array = {5,2,7,1,8,3};

    cout<<"Elements before sorting:"<<endl;
    for(int i:array){
        cout<<i<<"\t";
    }
    cout<<endl;

    for(int i = 0; i<array.size(); i++){
        for(int j = 0; j<array.size()-i-1; j++){
            if(array.at(j)>array.at(j+1)){
                int temp = array.at(j);
                array.at(j) = array.at(j+1);
                array.at(j+1) = temp;
            }
        }
    }

    cout<<"Elements after sorting:"<<endl;
    for(int i:array){
        cout<<i<<"\t";
    }
    cout<<endl;

    return 0;
}