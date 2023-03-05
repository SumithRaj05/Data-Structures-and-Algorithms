// hackerrank

// Given a 6x6 2D Array arr:

// 1 1 1 0 0 0
// 0 1 0 0 0 0
// 1 1 1 0 0 0
// 0 0 0 0 0 0
// 0 0 0 0 0 0
// 0 0 0 0 0 0

// An hourglass in A is a subset of values with indices 
// falling in this pattern in arr's graphical representation:

// a b c
//   d
// e f g

// There are 16 hourglasses in arr. An hourglass sum is the sum 
// of an hourglass' values. Calculate the hourglass sum for 
// every hourglass in arr, then print the maximum hourglass sum.
// The array will always be 6x6.

int hourglassSum(vector<vector<int>> arr) {
    int maxSum = INT_MIN;
    int currSum;
    for(int i=1; i<5; i++){
        for(int j=1; j<5; j++){
            currSum = arr[i][j]+arr[i-1][j]
                        +arr[i+1][j]+arr[i-1][j-1]
                        +arr[i-1][j+1]+arr[i+1][j-1]
                        +arr[i+1][j+1];
            maxSum = max(maxSum, currSum);
        }
    }
    return maxSum;
}