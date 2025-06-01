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
        if (n == 1 && !head -> next) return nullptr;
        
        ListNode *dummy = new ListNode(-1);
        dummy -> next = head;

        ListNode *prev = dummy, *cur = dummy;
        int cnt = 0;
        while (cur){
            cnt++;
            if (cnt > n + 1){
                prev = prev -> next;
            }
            cur = cur -> next;
        }

        ListNode *d = prev -> next;
        prev -> next = prev -> next -> next;
        delete d;
        return dummy -> next;
    }
};