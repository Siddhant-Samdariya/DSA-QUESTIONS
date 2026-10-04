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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp1=l1;
        ListNode* temp2=l2;
        int value=(l1->val+l2->val)%10;
        int carry=(l1->val+l2->val)/10;
        temp1=temp1->next;
        temp2=temp2->next;
        ListNode* l3= new ListNode(value);
        ListNode*temp3=l3;
        while(temp1!=NULL || temp2!=NULL)
        {
            if(temp2!=NULL && temp1!=NULL)
            {
                value=(temp1->val + temp2->val + carry)%10;
                ListNode* newnode= new ListNode(value);
                carry=(temp1->val + temp2->val + carry)/10;
                temp1=temp1->next;
                temp2=temp2->next;
                temp3->next=newnode;
                temp3=newnode;
            }
            else if(temp1==NULL && temp2!=NULL)
            {
                value=(temp2->val + carry)%10;
                ListNode* newnode= new ListNode(value);
                carry=(temp2->val + carry)/10;
                temp2=temp2->next;
                temp3->next=newnode;
                temp3=newnode;
            }
            else
            {
                value=(temp1->val + carry)%10;
                ListNode* newnode= new ListNode(value);
                carry=(temp1->val + carry)/10;
                temp1=temp1->next;
                temp3->next=newnode;
                temp3=newnode;
            }
        }
        if(carry!=0)
        {
            ListNode* newnode= new ListNode(carry);
            temp3->next=newnode;
        }
        return l3;
    }
};

int main(){
    
    return 0;
}