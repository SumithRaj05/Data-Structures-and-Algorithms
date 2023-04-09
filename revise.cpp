#include<bits/stdc++.h>

using namespace std;

int gcd(int a,int b){
    if(a==0){
        return b;
    }
    return gcd(b%a, a);
}

void selectionSort(vector<int> &arr, int n){
    int min;
    for(int i=0; i<n-1; i++){
        min = i;
        for(int j=i+1; j<n; j++){
            if(arr[min]>arr[j]){
                min = j;
            }
        }
        if(min!=i){
            swap(arr[min], arr[i]);
        }
    }
}

void bubbleSort(vector<int> &arr, int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

void stringMatch(string s, string p){
    int n = s.size();
    int m = p.size();
    for(int i=0; i<=n-m; i++){
        int j = 0;
        int count = 0;
        while(j<m && s[i+j]==p[j]){
            j++;
        }
            if(j==m){
                cout<<"Pattern is at "<<j<<" "<<j+i<<endl;
                return;
            }
    }
    cout<<"not found";
}

void merge(vector<int> &arr, vector<int> a, vector<int> b, int n){
    int i=0, j=0, k=0;
    int lena = n/2;
    int lenb = n-(n/2);
    while(i<lena && j<lenb){
        if(a[i]<b[j]){
            arr[k] = a[i];
            i++;
        }else{
            arr[k] = b[j];
            j++;
        }
        k++;
    }
    while(i<lena){
        arr[k] = a[i];
        k++;i++;
    }
    while(j<lenb){
        arr[k] = b[j];
        k++;j++;
    }
}

void mergeSort(vector<int> &arr, int n){
    if(n<=1){
        return;
    }
    vector<int> a(n/2), b((n-(n/2)));
    for(int i=0; i<n/2; i++){
        a[i] = arr[i];
    }
    for(int i=0; i<n-(n/2); i++){
        b[i] = arr[i+(n/2)];
    }
    mergeSort(a, n/2);
    mergeSort(b, n-(n/2));
    merge(arr, a, b, n);
}

int main(){
    vector<int> arr = {5,8,3,7,2,0,10,4,2,9,1,6};
    int n = arr.size();

    mergeSort(arr, n);

    for(int i: arr){
        cout<<i<<"\t";
    }
    cout<<endl;
    return 0;
}