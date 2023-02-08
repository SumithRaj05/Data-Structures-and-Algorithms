#include<bits/stdc++.h>
using namespace std;
#define print(x) cout<<x<<endl; 

void dfs(vector<vector<int>> arr, vector<int> vis, int i){
    print(i);
    vis[i] = 1;
    for(int j=0; j<vis.size(); j++){
        if(arr[i][j]==1 && !vis[j]){
            dfs(arr, vis, j);
        }
    }
}

int main(){
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
    dfs(arr, visited, i);
    cout<<endl;
    return 0;
}