
//bruteforce solution will be to find all possible permution using recursion then return the next permutation

//second solution will be to use next_permutation() of STL

// third solution is code this function by yourself
#include <iostream>
#include<vector>
using namespace std;

void nextPermutation(vector<int>& nums) {
      int index = -1;
      int n = nums.size();

      for(int i=n-2;i>=0;i--){       //finding the location at which swap will happen
          if(nums[i]<nums[i+1]){
              index = i;
              break;
          }
      }

      for(int i=n-1;i>=index && index!=-1;i--){  
          if(nums[i]>nums[index]){
              swap(nums[i],nums[index]);
              break;
          }
      }
      reverse(nums.begin()+index+1, nums.end());
  }
