vector<int> twoOddNum(vector<int> arr){
    //solution 1: using map-> O(2n) S(n)
  
    // int n = arr.size();
    // vector<int> ans;
    // map<int, int> table;

    // for(int i=0; i<n; i++){
    //     table[arr[i]]++;
    // }

    // for(auto i:table){
    //     if(i.second%2==1) ans.push_back(i.first);
    // }
    // reverse(ans.begin() ,ans.end());
    // return ans;

    //solution 2: Bit manipulation: O(n) S(1)
    int res = 0;
    vector<int> ans;
    int n = arr.size();
    for(int i:arr){
        res = res ^ i;
    }

    //find rightmost set bit
    int k = res & ~(res-1);
    int group1 = 0;
    int group2 = 0;

    for(int i=0; i<n; i++){
        if(arr[i]& k) group1 = group1^arr[i];
        else group2 = group2 ^ arr[i];
    }
    ans.push_back(max(group2, group1));
    ans.push_back(min(group2, group1));
    return ans;
}
