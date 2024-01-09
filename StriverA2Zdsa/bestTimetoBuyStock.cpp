#include<bits/stdc++.h>
using namespace std;
//bruteforce solution is to find all possible profits and then take maximum one: O(n^2)

//optimal solution
int maxProfit(vector<int> &arr) {
    int maxPro = 0;
    int n = arr.size();
    int minPrice = INT_MAX;

    for (int i = 0; i < arr.size(); i++) {
        minPrice = min(minPrice, arr[i]);
        maxPro = max(maxPro, arr[i] - minPrice);
    }
    
    return maxPro;
}
