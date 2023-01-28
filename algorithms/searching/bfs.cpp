#include<iostream>
#include<vector>
#include<queue>
using namespace std;
#define print(x) cout<<x<<endl; 

int main(){
    queue<int> q;
    int i = 0;
    int n = 5;
    vector<int> visited(n,0);
    vector<vector<int>> arr = {
        {0, 1, 1, 0, 0},
        {1, 0, 0, 1, 1},
        {1, 0, 0, 1, 1},
        {0, 1, 1, 0, 0},
        {0, 1, 1, 0, 0}
    };
    print("Nodes are:\n");
    visited[i] = 1;
    print(i);
    q.push(i);
    while(!q.empty()){
        i = q.front();
        q.pop();
        for(int j=0; j<n; j++){
            if(arr[i][j]==1 && visited[j]==0){
                visited[j] = 1;
                print(j);
                q.push(j);
            }
        }
    }
    cout<<endl;
    return 0;
}