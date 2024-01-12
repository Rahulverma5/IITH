#include <iostream>
#include <vector>
using namespace std;

//bruteforce solution O(nm+n+m)
void setRow(vector<vector<int>> &nums, int m, int i){
    for(int k=0;k<m;k++){
        if(nums[i][k] != 0){
            nums[i][k]=-1;
        }
    }
}
void setCol(vector<vector<int>> &nums, int n, int j){
    for(int k=0;k<n;k++){
        if(nums[k][j] != 0){
            nums[k][j]=-1;
        }
    }
}
void setMatrixZero(vector<vector<int>>& nums){
    int n = nums.size();
    int m = nums[0].size();

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if (nums[i][j]==0){
                setRow(nums,n, i);
                setCol(nums,m, j);
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if (nums[i][j]==-1){
                nums[i][j]=0;
            }
        }
    }
}

//better solution O(nm) and S(n+m)
void setZeroes(vector<vector<int>> &matrix){
    int n = matrix.size();
    int m = matrix[0].size();
    vector<int> rows(n,0);
    vector<int> cols(m,0);

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]==0){
                rows[i]=1;
                cols[j]=1;

            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(rows[i]==1||cols[j]==1){
                matrix[i][j]=0;
            }
            
        }
    }

}

// OPtimal: you can optimize space comlexity by using first row and first columns instead using extra space


int main() {
    vector<vector<int>> nums = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
    int n = nums.size();
    int m = nums[0].size();
    setZeroes(nums);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<nums[i][j]<<" ";
        }

        cout<<endl;
    }
}
