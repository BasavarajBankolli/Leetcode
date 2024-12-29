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
        if (!head) return head;

        if (!head->next && n == 1) return nullptr;

        ListNode* dummy = new ListNode(-1); // Add a dummy node to simplify edge cases
        dummy->next = head;
        ListNode* cur = dummy;
        ListNode* prev = dummy;

        for (int i = 0; i <= n; i++) {
            if (cur) {
                cur = cur->next;
            } else {
                // If n is greater than the length of the list, return the unmodified list
                return head;
            }
        }

        while (cur) {
            prev = prev->next;
            cur = cur->next;
        }

        ListNode* del = prev->next;
        prev->next = del->next;

        delete del;
        ListNode* newHead = dummy->next;
        delete dummy;

        return newHead;
    }

};