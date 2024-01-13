
//time complexity: O(m*n) where m is maximum common prefix and n is length of array

string longestCommonPrefix(vector<string>& strs) {
    int n = strs.size();
    string ans = strs[0];
    if(n==1) return strs[0];
    
    for(int i=0; i<n-1;i++){
        int j = 0;
        string w="";
        while(j<min(strs[i].length(), strs[i+1].length()) && strs[i][j]==strs[i+1][j] ){
            w = w+strs[i][j];
            j++;
        }
        if(ans.length()>w.length()){
            ans = w;
        }
    }
    return ans;   
}

//better solution
string longestCommonPrefix(vector<string>& v) {
    string ans="";
    sort(v.begin(),v.end());
    int n=v.size();
    string first=v[0],last=v[n-1];
    for(int i=0;i<min(first.size(),last.size());i++){
        if(first[i]!=last[i]){
            return ans;
        }
        ans+=first[i];
    }
    return ans;
}
