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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL || head->next==nullptr) return head;
        ListNode*temp=head->next;
        ListNode*prev=head;

        while(temp!=NULL)
        {
            if(prev->val==temp->val)
            {
                ListNode*prev2=prev;
                prev->next=prev->next->next;
                ListNode*temp2=temp;
                temp=temp->next;
                delete temp2;
                prev=prev2;
                temp=prev2->next;
            }
            else
            {
                temp=temp->next;
                prev=prev->next;
            }
        }
        return head;
    }
};

int main(){
    
    return 0;
}