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
    private:
    ListNode* insertEnd(ListNode* head,int data){
        if(head==NULL){
            head=new ListNode(data);
            return head;
        }
        ListNode* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=new ListNode(data);
        return head;
    }
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        ListNode* temp=head;
        int size=0;
        while(temp!=NULL){
            size++;
            temp=temp->next;
        }
        vector<ListNode*> ans(k,NULL);
        if(size<k){
            temp=head;
            int i=0;
            while(temp!=NULL){
                ans[i]=new ListNode(temp->val);
                i++;
                temp=temp->next;
            }
            return ans;
        }
        else{
            int m=size/k;
            int n=size%k;
            vector<int> p(k,0);
            for(int i=0;i<k;i++){
                p[i]=m;
                if(n>0){
                    p[i]+=1;
                    n--;
                }

            }
            int i=0;
            temp=head;
            while(k>0){
                int q=p[i];
                //ListNode* tail=ans[i];
                while(q>0){
                    ans[i]=insertEnd(ans[i],temp->val);
                    q--;
                    temp=temp->next;
                }
                i++;
                k--;
            }   
        }
        return ans;   
    }
};
int main(){
    ListNode* head=NULL;
    int k;
    cin>>k;
    
  return 0;
}