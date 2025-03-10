/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *t=head;
        int c=0;
        while(t!=NULL){
            t=t->next;
            ++c;
        }
        t=head;
        c/=2;
        while(c>0){
            t=t->next;
            --c;
        }
        return t;
    }
};