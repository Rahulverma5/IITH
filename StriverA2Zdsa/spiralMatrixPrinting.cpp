#include<iostream>
#include<vector>
using namespace std;

// printing the matrix in spiral manner
vector<int> spiralOrder(vector<vector<int>>& matrix) {
    vector<int> ans;
    int n = matrix.size();
    int m = matrix[0].size();
    int left = 0, right = m-1, top = 0, bottom = n-1;

    while(top<=bottom && left<=right){
        for(int i=left; i<=right; i++){
            ans.push_back(matrix[top][i]);
        }

        top++;
        for(int i=top; i<=bottom; i++){
            ans.push_back(matrix[i][right]);
        }
        right--;

        if(top<=bottom){
            for(int i=right; i>=left; i--){
                ans.push_back(matrix[bottom][i]);
            }
            bottom--;
        }
        
        if(left<=right){
            for(int i=bottom; i>=top; i--){
                ans.push_back(matrix[i][left]);
            }
            left++;
        }

    } 
    return ans;
}

//Given a positive integer n, generate an n x n matrix filled with elements from 1 to n2 in spiral order.
vector<vector<int>> generateMatrix(int n) {
    int ans[n][n];
    int left = 0, right = n-1, top = 0, bottom = n-1;
    int c = 1;
    while(top<=bottom && left<=right){
        for(int i=left; i<=right; i++){
            ans[top][i]= c;
            c++;
        }
        
        top++;
        for(int i=top; i<=bottom; i++){
            ans[i][right]=c;
            c++;
        }
        right--;

        if(top<=bottom){
            for(int i=right; i>=left; i--){
                ans[bottom][i]=c;
                c++;
            }
            bottom--;
        }
        
        if(left<=right){
            for(int i=bottom; i>=top; i--){
                ans[i][left]=c;
                c++;
            }
            left++;
        }

    }
    vector<vector<int>> mat;
    for(int i=0; i<n; i++){
        vector<int> dum(ans[i], ans[i]+n);
        mat.push_back(dum);
    }
    return mat;
}
