#include<iostream>
#include<vector>
using namespace std;

// solution 1 using count of numbers of 0s 1s and 2s
void sortColors1(vector<int>& nums) {
      int zeros = 0;
      int ones = 0;
      int twos = 0;
  
      for(int i=0;i<nums.size();i++){
          if (nums[i]==0) zeros++;
          else if(nums[i]==1) ones++;
          else twos++;
      }
  
      for(int i=0; i<nums.size();i++){
          if(i<zeros){
              nums[i]=0;
          }
          else if (i<ones+zeros){
              nums[i]=1;
          }
          else{
              nums[i]=2;
          }
      }   
    }

//Dutch national flag algorithm
void sortColors2(vector<int>& nums) {
      int n = nums.size();
      int low=0, mid = 0, high = n-1;

      while(mid<=high){
          if(nums[mid]==0){
              swap(nums[mid], nums[low]);
              low++;
              mid++;
          }
          else if(nums[mid]==1) mid++;
          else{
              swap(nums[mid], nums[high]);
              high--;
          }
      } 
    }

