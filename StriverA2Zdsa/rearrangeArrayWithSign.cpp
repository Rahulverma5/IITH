

//first solution: O(n), s(n)
vector<int> rearrangeArray(vector<int>& nums) {
      vector<int> pos , neg, ans;
      int n = nums.size();

      for(int i=0; i<n;i++){
          if(nums[i]<0) neg.push_back(nums[i]);
          if(nums[i]>0) pos.push_back(nums[i]);
      }

      for(int i=0;i<n/2;i++){
          ans.push_back(pos[i]);
          ans.push_back(neg[i]);

      }

      return ans;
    }

//optimal solution
vector<int> rearrangeArray(vector<int>& nums) {
      int n = nums.size();
      vector<int> ans(n,0);
      int j = 0;   //even index of ans
      int k = 1;   //odd index of ans
      for(int i=0; i<n;i++){
          if(nums[i]>0){
              ans[j]=nums[i];
              j+=2;
          }
          if(nums[i]<0){
              ans[k] = nums[i];
              k+=2;
          }
      }

      return ans;
  }
