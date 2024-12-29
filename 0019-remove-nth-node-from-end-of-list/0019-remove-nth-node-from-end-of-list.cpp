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

        ListNode* prev = head;
        ListNode* cur = head;

        for (int i = 0; i < n; i++) cur = cur -> next;
        if (!cur) return head -> next;

        while (cur -> next) {
            cur = cur -> next;
            prev = prev -> next;
        }
        ListNode* del = prev -> next;
        prev -> next = prev -> next -> next;

        delete del;
        return head;
    }

};