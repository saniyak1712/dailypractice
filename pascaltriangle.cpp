#include <bits/stdc++.h> 
using namespace std;

class Solution {
public:
    // Function to print the element in rth row and cth column 
    int pascalTriangleI(int r, int c) {
        return nCr(r-1, c-1);
    }
    
private:
    // Function to calculate nCr
    int nCr(int n, int r)  {
        // Choose the smaller value for lesser iterations
        if(r > n-r) r = n-r;
        
        // base case
        if(r == 1) return n;
        
        int res = 1; // to store the result 
        
        // Calculate nCr using iterative method avoiding overflow 
        for (int i = 0; i < r; i++) {
            res = res * (n-i);
            res = res / (i+1);
        }
        
        return res; // return the result 
    }
};

int main() {
    // row number
    int r = 5; 
    // col number
    int c = 3;

    // Create an instance of the Solution class
    Solution sol; 
    
    // Function call to print the element in rth row and cth column 
    int ans = sol.pascalTriangleI(r, c);

    cout << "The element in the rth row and cth column in pascal's triangle is: " << ans;

    return 0;
}
Complexity Analysis:
