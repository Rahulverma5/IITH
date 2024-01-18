//back_tracking + recursion
// watch striver video for explanation
void combinations(int ind,vector<int> &candidates, int target, vector<vector<int>> &ans, vector<int> &ds){
      if(ind>=candidates.size()){
          if(target==0){
              ans.push_back(ds);
          }
          return;
      }
      //pick up element from the array
      if(candidates[ind]<= target){
          ds.push_back(candidates[ind]);
          combinations(ind, candidates, target-candidates[ind],ans, ds);
          ds.pop_back();
      }
      combinations(ind+1, candidates, target, ans, ds);

      
  }

  vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
      vector<vector<int>> ans;
      vector<int> ds;
      combinations(0, candidates, target, ans, ds);
      return ans;
      
  }
