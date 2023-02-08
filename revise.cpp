#include<bits/stdc++.h>
using namespace std;

int partition(int arr[], int low, int high)
{
    int pivot = arr[high]; // pivot
    int i = (low - 1); // Index of smaller element and indicates
                 
    for (int j = low; j <= high - 1; j++) {
        // If current element is smaller than the pivot
        if (arr[j] < pivot) {
            i++; // increment index of smaller element
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int start, int end){
    if(start>=end)
        return;
    int pin = partition(arr, start, end);
    quickSort(arr, start, pin-1);
    quickSort(arr, pin+1, end);
}

int main(){
    int n,m,u,v;
    cin>>n>>m;
    vector<int> graph[];
    for(int i=0; i<m; i++){
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    vector<int> visited(n,0);
    stack<int> s;
    int i=0;
    s.push(i);
    visited[i]=1;
    while(s.size()<=n){
        for(int j=0; j<n; j++){
            if(visited[j]!=1){
                s.push(j);
                visited[j]=1;
            }
        }
    }
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;
}