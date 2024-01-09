#include<unordered_map>
#include<iostream>
#include<vector>
using namespace std;

// bruteforce solution will be to iterate through all the elements and counting the occurance O(n^2)

// better solution is to use Hashmap O(2n)
int majorityElement(vector<int> v) {
	unordered_map <int,int> mpp;
  
	for(int val:v){
		mpp[val]++;
	}
	
	for (const auto& pair : mpp) {
		if (pair.second >= v.size()/2) {
			return pair.first; 							
		}
  }
}

// optimal solution
