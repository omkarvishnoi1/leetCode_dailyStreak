#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int> ans;
        int n=queries.size();
        for(int i=0;i<n;i++){
            int left=queries[i][0];
            int right=queries[i][1];
            int temp=arr[left];
            while(left<right){
                temp=temp^arr[left+1];
                left++;
            }
            ans.push_back(temp);
        }
        return ans;
    }
};
int main(){
    vector<int> arr;

    vector<vector<int>> queries;
    int n;
    cin>>n;
    

    
  return 0;
}