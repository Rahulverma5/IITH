#include<iostream>
#include<vector>
#include<map>
using namespace std;

//bruteforce solution will be to use 3 loops: O(n^3)
//better solution will be to use two loops ans conditioning: O(n^2)
//optimal solution is to use Hashmaps: O(nlogn)

int subarraySum(vector<int>& nums, int k) {
    int count=0, n = nums.size();
    unordered_map<int, int> preSummap;
    int sum = 0;
    preSummap[0]=1;
    for(int i=0; i<n; i++){
        sum+=nums[i];
        int rem = sum-k;

        count+=preSummap[rem];
        preSummap[sum]++;
    }
    return count;
}
