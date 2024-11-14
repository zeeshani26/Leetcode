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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        if(head==nullptr){
            return nullptr;
        }
        ListNode *todelete = head;
        ListNode *after = head;
        ListNode *before = head;
        for(int i=0;i<n;i++){
            after = after->next;
        }

        if(after==nullptr){
            head = head->next;
            delete todelete;
            return head;
        }
        
       

        while(after!=nullptr){
            after = after->next;
            before = todelete;
            todelete = todelete->next; 
        }
        before->next = todelete->next;
        return head;
    }
};