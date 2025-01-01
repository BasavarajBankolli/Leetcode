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
    ListNode* swapNodes(ListNode* head, int k) {
        if (!head) return head;

        ListNode dummy(0, head);

        ListNode* prev;
        ListNode* fast = head;
        ListNode* slow = &dummy;

        for (int i = 1; i < k; i++){
            fast = fast -> next;
        }

        prev = fast;
        slow = head;

        while (fast -> next){
            fast = fast -> next;
            slow = slow -> next;
        }

        swap(slow -> val, prev -> val);
        return dummy.next;

    }
};