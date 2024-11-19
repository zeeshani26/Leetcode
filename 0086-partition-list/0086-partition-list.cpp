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
        // Create Dummy Node for list1 with values less thn x
        ListNode* lessHead = new ListNode(0); // Dummy Node creation
        // Create dummy node for list2 with values >= x
        ListNode* greatHead = new ListNode(0);
        //Create two pointers at dummy nodes for list traversal
        ListNode* tmpless = lessHead;
        ListNode* tmpgreat = greatHead;
        // Traverse Original List and add values in the respective lists
        ListNode* tmp = head;
        while(tmp!=nullptr){
            if(tmp->val < x){
                tmpless->next = tmp;
                tmpless = tmpless->next;
            }
            else{
                tmpgreat->next = tmp;
                tmpgreat = tmpgreat->next;
            }
            tmp = tmp->next;
        }

// Since initial pointers are 0, well do greatHead->next when connecting  
        tmpless->next = greatHead->next;
        tmpgreat->next = nullptr;
        return lessHead->next;       
    }
};