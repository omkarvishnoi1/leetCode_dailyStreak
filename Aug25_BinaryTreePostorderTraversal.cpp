#include<bits/stdc++.h>
using namespace std;
struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {} 
    };
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root,vector<int> &num) {
        if (root==nullptr)
            return num;
        postorderTraversal(root->left,num);
        postorderTraversal(root->right,num);
        num.push_back(root->val);
        return num;
    }
};
int main(){
    TreeNode root(0);

  return 0;
}