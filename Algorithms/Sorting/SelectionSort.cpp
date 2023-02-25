#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<char> array = {'c','e','a','d','f','b'};
    
    cout<<"Elements before sorting:"<<endl;
    for(char i:array){
        cout<<i<<"\t";
    }
    cout<<endl;

    for(int i = 0; i<array.size()-1; i++){
        int min = i;
        for(int j = i+1; j<array.size(); j++){
            if(array.at(min)>array.at(j))
                min = j;
        }
        if(min != i){
            int temp = array.at(min);
            array.at(min) = array.at(i);
            array.at(i) = temp;
        }
    }

    cout<<"Elements after sorting:"<<endl;
    for(char i:array){
        cout<<i<<"\t";
    }
    cout<<endl;
    
    return 0;
}
