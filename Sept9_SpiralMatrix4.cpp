#include<bits/stdc++.h>
using namespace std;

  struct ListNode {
         int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };


class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>> ans(m,vector<int>(n,-1));
        ListNode* temp=head;
        int firstRow=0;
        int lastRow=m-1;
        int firstCol=0;
        int lastCol=n-1;
        vector<int> p;
        
        // Collect values from the linked list into vector p.
        while(temp!=NULL){
            p.push_back(temp->val);
            temp=temp->next;
        }
        
        int count=0;
        while(count < p.size() && firstRow <= lastRow && firstCol <= lastCol){
            // Filling first row.
            for(int i=firstCol;i<=lastCol && count < p.size();i++){
                ans[firstRow][i] = p[count++];
            }
            firstRow++;
            
            // Filling last column.
            for(int i=firstRow;i<=lastRow && count < p.size();i++){
                ans[i][lastCol] = p[count++];
            }
            lastCol--;
            
            // Filling last row.
            for(int i=lastCol;i>=firstCol && count < p.size();i--){
                ans[lastRow][i] = p[count++];
            }
            lastRow--;
            
            // Filling first column.
            for(int i=lastRow;i>=firstRow && count < p.size();i--){
                ans[i][firstCol] = p[count++];
            }
            firstCol++;
        }
        
        return ans;
    }
};
int main(){
    ListNode* head=new ListNode(0);
    
    
  return 0;
}