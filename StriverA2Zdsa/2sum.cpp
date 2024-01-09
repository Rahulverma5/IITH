#include <iostream>
#include<vector>
#include<unordered_map>
using namespace std;

bool twoSum(vector<int> arr, int sum){
    unordered_map <int,int> mpp;
    bool ans = false;
  
    for(int i=0;i<arr.size();i++){
        int rem = sum - arr[i];
        auto it = mpp.find(rem);
        if(it!=mpp.end()){
            ans = true;
        }

        mpp[arr[i]]=i;
    }
    return ans;
}

int main() {
    vector<int> arr={3,2,4};
    cout<<twoSum(arr, 6)<<endl;  

    return 0;
}
