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
        if(head == NULL || head->next == NULL) return NULL;

        ListNode *fast = head;
        ListNode *slow = head;
        ListNode *pre = NULL;

        while(fast && fast -> next){
            pre = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        
        pre->next = slow->next;
        delete slow;
        return head;

    }
};