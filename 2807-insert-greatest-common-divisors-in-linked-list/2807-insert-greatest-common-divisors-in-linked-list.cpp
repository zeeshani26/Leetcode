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
    int greatestCommonDivisor(int a, int b){
        // Euclidean Algorithm
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head->next;

        while(fast!=nullptr){
            int newValue = greatestCommonDivisor(slow->val,fast->val);
            ListNode* mid = new ListNode(newValue);
            slow->next = mid;
            mid->next = fast;
            slow = fast;
            fast = fast->next;
        }
        return head;
    }
};