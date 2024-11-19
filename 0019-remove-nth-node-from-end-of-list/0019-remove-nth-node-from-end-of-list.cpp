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
       ListNode* last = head;
       for(int i=0; i<n;i++){
            last = last->next;
       } 
       
       ListNode* tmp = head;
       ListNode* prev = nullptr;
       if(last==nullptr){
            tmp = tmp->next;
            prev = head;
            delete prev;
            return tmp;
       }
       while(last!=nullptr){
            prev = tmp;
            tmp = tmp->next;
            last = last->next;
       }
       prev->next = tmp->next;
       delete tmp;
       return head;
    }
};