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
    int GCD(int n,int m){
        int i=1;
        int gcd=1;
        while(i<=n && i<=m){
            if(n%i==0 && m%i==0) gcd=i;
            i++;
        }
        return gcd;
    }
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        vector<int> gcd;
        ListNode* temp=head;
        while(temp->next!=NULL){
            int num1=temp->val;
            int num2=temp->next->val;
            gcd.push_back(GCD(num1,num2));
            temp=temp->next;
        }
        int i=0;
        temp=head;
        ListNode* temp2=NULL;
        while(i<gcd.size() && temp!=NULL){
            // insert from linked list.
            temp2=insertEnd(temp2,temp->val);
            temp=temp->next;
            // insert from gcd vector.
            temp2=insertEnd(temp2,gcd[i++]);

        }
        while(temp!=NULL){
            temp2=insertEnd(temp2,temp->val);
            temp=temp->next;

        }
        return temp2;
        

    }
};
int main(){
    
  return 0;
}