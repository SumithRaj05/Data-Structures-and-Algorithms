#include<iostream>
#include<vector>
#include<map>
#include<list>
using namespace std;

class Edge{
    public:
        int v1,v2;
        Edge(int v1, int v2){
            this->v1 = v1;
            this->v2 = v2;
        }
};

int main(){
    //adjacency matrix
    int n,m,a,b;
    cout<<"Enter number of vertices:\n";
    cin>>n;
    cout<<"Enter number of edges:\n";
    cin>>m;
    cout<<"Enter "<<m<<" pairs with edges:\n";
    vector<vector<int>> arr(n,vector<int> (n,0));
    for(int i=0; i<m; i++){
        cin>>a>>b;
        arr[a][b]=1;
        arr[b][a]=1;
    }
    cout<<"Adjacency matrix is:\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    //adjacency list
    map<int, list<int>> arrList;
    cout<<"Enter number of edges:\n";
    cin>>m;
    cout<<"Enter "<<m<<" pairs with edges:\n";
    for(int i=0; i<m; i++){
        cin>>a>>b;
        arrList[a].push_back(b);
        arrList[b].push_back(a);
    }
    cout<<"Adjacency list is:\n";
    for(auto j: arrList){
        cout<<j.first;
        for(int k: j.second){
            cout<<" -> "<<k;
        }
        cout<<endl;
    }
    cout<<endl;

    //or
    vector<Edge> graph;
    int v1,v2;
    cout<<"Enter number of edges:\n";
    cin>>m;
    cout<<"Enter "<<m<<" pairs with edges:\n";
    for(int i=0; i<m; i++){
        cin>>v1>>v2;
        graph.push_back(Edge(v1,v2));
    }
    cout<<"Graph is:\n"
    for(auto k: graph){
        cout<<k.v1<<"->"<<k.v2<<endl;
    }
    cout<<endl;
    return 0;
}