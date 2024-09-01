#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        if(m*n != original.size()) return {};
        int p=0;
        vector<vector<int>> ans(m);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                ans[i].push_back(original[p++]);   
            }
        }
        return ans;
    }
};
int main(){
    vector<int> original={1,2,3};
    int m=1;
    int n=2;
    Solution s1;
    vector<vector<int>> ans=s1.construct2DArray(original,m,n);
    cout<<"Done"<<endl;

  return 0;
}