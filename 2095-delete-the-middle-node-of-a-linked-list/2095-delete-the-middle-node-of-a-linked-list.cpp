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
    ListNode* deleteMiddle(ListNode* head) {
        // Brute force
        ListNode* tmp = head;
        int l = 0;
        while(tmp != nullptr){
            tmp = tmp->next;
            l++;
        }
        if(l==1){
            return nullptr;
        }
        int mid = floor(l/2);
        l = 0;
        tmp = head;
        while(tmp != nullptr){
            if(l == mid-1){
                tmp->next = tmp->next->next;
            }
            tmp = tmp->next;
            l++;
        }
        return head;

    }
};