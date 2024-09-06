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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        if(head==NULL) return NULL;
        unordered_map<int,bool> mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]] = true;
        }
        // for(auto it:mpp){
        //     cout<<it.first<<" "<<it.second<<endl;
        // }
        while(mpp[head->val]){
            head=head->next;
        }
        ListNode* temp=head;
        ListNode* prev=head;
        while(temp!=NULL){
            if(mpp[temp->val]){
                prev->next=temp->next;
                temp=temp->next;
            }
            else{
                prev=temp;
                temp=temp->next;

            }
        }
        
        return head;
    }
};
int main(){
    
  return 0;
}