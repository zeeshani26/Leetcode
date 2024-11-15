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
        if(!list1){
            return list2;
        }
        else if(!list2){
            return list1;
        }
        //creating a dummy node for first time
        ListNode* dummy = new ListNode(0);
        // Using Dummy node for first element
        ListNode* tmp = dummy; 
        
        while(list1!=nullptr && list2!=nullptr){
            if(list2->val < list1->val){
                tmp->next = list2;
                list2 = list2->next;
            }
            else{
                tmp->next = list1;
                list1 = list1->next;
            }
            tmp = tmp->next;
        }
        //terniary operator like js

        tmp->next = (list1 != nullptr) ? list1 : list2;

        ListNode* mergedList = dummy->next;
        delete dummy;
        return mergedList;
        





    }
};