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
    ListNode* partition(ListNode* head, int x) {
        if(!head){
            return nullptr;
        }
    // Make two dummy nodes
    ListNode* lessHead = new ListNode(0);
    ListNode* moreHead = new ListNode(0);

    // Traverse the original array and place the nodes based on val
    ListNode* less = lessHead;
    ListNode* more = moreHead;
    ListNode* tmp = head;
    while(tmp!=nullptr){
        if(tmp->val < x){
            less->next = tmp;
            less = less->next;
        }
        else{
            more->next = tmp;
            more = more->next;
        }
        tmp = tmp->next;
    }
    more->next = nullptr;
    less->next = moreHead->next;

    ListNode* todelete1 = lessHead;
    ListNode* todelete2 = moreHead;
    moreHead = moreHead->next;
    lessHead = lessHead->next;
    delete todelete1;
    delete todelete2;
    return lessHead;
    }
};