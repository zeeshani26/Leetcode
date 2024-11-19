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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // If any list is empty
        if(!list2){
            return list1;
        }
        if(!list1){
            return list2;
        }
    //    Create a dummy node, to attach relevant nodes and create sorted 
    //    list
        ListNode* dummy = new ListNode(0);

        ListNode* tmp1 = list1;
        ListNode* tmp2 = list2;
        ListNode* tmp = dummy;
        // Traverse through both list and add the smaller node to dummy
       while(tmp1!=nullptr && tmp2!=nullptr){
            if(tmp2->val < tmp1->val){
                tmp->next = tmp2;
                tmp2 = tmp2->next;
            }
            else{
                tmp->next = tmp1;
                tmp1 = tmp1->next;
            }
            tmp = tmp->next;
       }

       // Account for leftover from either list
       if(tmp1!=nullptr){
        tmp->next = tmp1;
       }
       else{
        tmp->next = tmp2;
       }
       dummy = dummy->next;
       return dummy;
    }
};