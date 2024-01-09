#include<iostream>
#include<vector>
#include <climits>
using namespace std;

//bruteforce solution: finding all possible subarrays O(n^2)
int maxSubArray(vector<int>& nums) {
    int n = nums.size();
    int sum=INT_MIN;
    for(int i=0;i<n;i++){
        int s=0;
        for(int j=i; j<n;j++){ 
            s = s+nums[j];
            sum = max(sum,s);
        }
    }
    return sum;
  }

//using Kadane's Algorithm: O(n); when only sum is need to return 
int maxSubArray(vector<int>& nums) {
    int n = nums.size();
    long long maxi = INT_MIN, sum = 0;

    for (int i = 0; i < n; i++) {
        sum = sum + nums[i];
        if (sum > maxi) {
            maxi = sum;
        }
        if (sum < 0) {
            sum = 0;
        }
    }
    return maxi;
  }

// using Kadane's Algorithm: O(n); when sum and subarray both need to return
int maxSubArray(vector<int>& nums) {
    int n = nums.size();
    long long maxi = INT_MIN, sum = 0;
    int startInd=-1, endInd=-1, start;

    for (int i = 0; i < n; i++) {
        if(sum==0) start=i;
        sum = sum + nums[i];
      
        if (sum > maxi) {
            maxi = sum;
            startInd = start;
            endInd = i;
        }
        if (sum < 0) {
            sum = 0;
        }
    }
    return maxi;    // for subarray return startInd and endInd
  }

