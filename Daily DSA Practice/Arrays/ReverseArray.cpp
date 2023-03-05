// hackerrank
// An array is a type of data structure that stores 
// elements of the same type in a contiguous block of 
// memory. In an array, , of size , each memory location 
// has some unique index,  (where ), that can be referenced as  or .
// Reverse an array of integers.

vector<int> reverseArray(vector<int> a) {
    int low = 0;
    int high = a.size()-1;
    while(low<=high){
        swap(a[low], a[high]);
        low++;
        high--;
    }
    return a;
}
