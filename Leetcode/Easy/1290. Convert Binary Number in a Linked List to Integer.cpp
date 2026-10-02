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
    int getDecimalValue(ListNode* head) {
        ListNode* temp=head;
        int pos=-1;
        int value=0;
        while(temp!=NULL)
        {
            temp=temp->next;
            pos++;
        }
        temp=head;
        while(temp!=NULL)
        {
            value+=temp->val * pow(2,pos);
            temp=temp->next;
            pos--;
        }
        return value;
    }
};

int main(){
    
    return 0;
}