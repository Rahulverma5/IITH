#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

//better solution: O(nlogn + n)
int longestConsecutive(vector<int>& nums) {
      sort(nums.begin(), nums.end());
      int count=1;
      int maxCount=1;
      if(nums.size()==0) return 0;
      for(int i=0;i<nums.size()-1 ;i++){

          if(nums[i]+1==nums[i+1]) {
              count++;
              maxCount = max(maxCount,count);
          }
          else if(nums[i]==nums[i+1]){
              continue;
          }
          else count=1;
      }
      return maxCount;
    }
